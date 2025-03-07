/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/crypto/Hash.h>
#include <aws/core/auth/AWSAuthSignerProvider.h>
#include <memory>
#include <atomic>

struct aws_array_list;

namespace Aws
{
    namespace Utils
    {
        template<typename R, typename E>
        class Outcome;

        namespace Xml
        {
            class XmlDocument;
        } // namespace Xml

        namespace Json
        {
            class JsonValue;
        } // namespace Json

        namespace RateLimits
        {
            class RateLimiterInterface;
        } // namespace RateLimits

        namespace Crypto
        {
            class MD5;
        } // namespace Crypto
    } // namespace Utils

    namespace Http
    {
        class HttpClient;

        class HttpClientFactory;

        class HttpRequest;

        class HttpResponse;

        class URI;
    } // namespace Http

    namespace Auth
    {
        AWS_CORE_API extern const char SIGV4_SIGNER[];
        AWS_CORE_API extern const char NULL_SIGNER[];
    }

    class AmazonWebServiceRequest;

    namespace Client
    {
        template<typename ERROR_TYPE>
        class AWSError;
        class AWSErrorMarshaller;
        class AWSRestfulJsonErrorMarshaller;
        class AWSAuthSigner;
        struct ClientConfiguration;
        class RetryStrategy;

        typedef Utils::Outcome<std::shared_ptr<Aws::Http::HttpResponse>, AWSError<CoreErrors>> HttpResponseOutcome;
        typedef Utils::Outcome<AmazonWebServiceResult<Utils::Stream::ResponseStream>, AWSError<CoreErrors>> StreamOutcome;

        /**
         * Abstract AWS Client. Contains most of the functionality necessary to build an http request, get it signed, and send it across the wire.
         */
        class AWS_CORE_API AWSClient
        {
        public:
            /**
             * configuration will be used for http client settings, retry strategy, throttles, and signing information.
             * supplied signer will be used for all requests, aws sdk clients will use default AuthV4Signer.
             * errorMarshaller tells the client how to convert error payloads into AWSError objects.
             */
            AWSClient(const Aws::Client::ClientConfiguration& configuration,
                const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer,
                const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller);

            /**
             * Configuration will be used for http client settings, retry strategy, throttles, and signing information.
             * Pass a signer provider to determine the proper signer for a given request; AWS services will use
             * SigV4 signer. errorMarshaller tells the client how to convert error payloads into AWSError objects.
             */
            AWSClient(const Aws::Client::ClientConfiguration& configuration,
                const std::shared_ptr<Aws::Auth::AWSAuthSignerProvider>& signerProvider,
                const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller);

            virtual ~AWSClient() { };

            /**
             * Generates a signed Uri using the injected signer. for the supplied uri and http method. expirationInSeconds defaults
             * to 0 which is the default 7 days. The implication of this function is using auth signer v4 to sign it.
             */
            Aws::String GeneratePresignedUrl(Aws::Http::URI& uri, Aws::Http::HttpMethod method, long long expirationInSeconds = 0);

            /**
             * Generates a signed Uri using the injected signer. for the supplied uri, http method and customized headers. expirationInSeconds defaults
             * to 0 which is the default 7 days. The implication of this function is using auth signer v4 to sign it.
             */
            Aws::String GeneratePresignedUrl(Aws::Http::URI& uri, Aws::Http::HttpMethod method, const Aws::Http::HeaderValueCollection& customizedHeaders, long long expirationInSeconds = 0);

            /**
             * Generates a signed Uri using the injected signer. for the supplied uri and http method and region. expirationInSeconds defaults
             * to 0 which is the default 7 days.
             */
            Aws::String GeneratePresignedUrl(Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, long long expirationInSeconds = 0) const;

            /**
             * Generates a signed Uri using the injected signer. for the supplied uri, http method and customized headers. expirationInSeconds defaults
             * to 0 which is the default 7 days.
             */
            Aws::String GeneratePresignedUrl(Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const Aws::Http::HeaderValueCollection& customizedHeaders, long long expirationInSeconds = 0);

            /**
             * Generates a signed Uri using the injected signer. for the supplied uri and http method, region, and service name. expirationInSeconds defaults
             * to 0 which is the default 7 days.
             */
            Aws::String GeneratePresignedUrl(Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName, long long expirationInSeconds = 0) const;

            /**
             * Generates a signed Uri using the injected signer. for the supplied uri, http method and customized headers. expirationInSeconds defaults
             * to 0 which is the default 7 days.
             */
            Aws::String GeneratePresignedUrl(Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName, const Aws::Http::HeaderValueCollection& customizedHeaders, long long expirationInSeconds = 0);

            /**
             * Generates a signed Uri using the injected signer. for the supplied uri and http method, region, service name and signer name. expirationInSeconds defaults
             * to 0 which is the default 7 days.
             */
            Aws::String GeneratePresignedUrl(Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName, const char* signerName, long long expirationInSeconds = 0) const;

            /**
             * Generates a signed Uri using the injected signer. for the supplied uri, http method, region, service name, signer name and customized headers. expirationInSeconds defaults
             * to 0 which is the default 7 days.
             */
            Aws::String GeneratePresignedUrl(Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName, const char* signerName, const Aws::Http::HeaderValueCollection& customizedHeaders, long long expirationInSeconds = 0);

            Aws::String GeneratePresignedUrl(const Aws::AmazonWebServiceRequest& request, Aws::Http::URI& uri, Aws::Http::HttpMethod method,
                const Aws::Http::QueryStringParameterCollection& extraParams = Aws::Http::QueryStringParameterCollection(), long long expirationInSeconds = 0) const;

            Aws::String GeneratePresignedUrl(const Aws::AmazonWebServiceRequest& request, Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName,
                const char* signerName, const Aws::Http::QueryStringParameterCollection& extraParams = Aws::Http::QueryStringParameterCollection(), long long expirationInSeconds = 0) const;

            Aws::String GeneratePresignedUrl(const Aws::AmazonWebServiceRequest& request, Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region, const char* serviceName,
                const Aws::Http::QueryStringParameterCollection& extraParams = Aws::Http::QueryStringParameterCollection(), long long expirationInSeconds = 0) const;

            Aws::String GeneratePresignedUrl(const Aws::AmazonWebServiceRequest& request, Aws::Http::URI& uri, Aws::Http::HttpMethod method, const char* region,
                const Aws::Http::QueryStringParameterCollection& extraParams = Aws::Http::QueryStringParameterCollection(), long long expirationInSeconds = 0) const;

            /**
             * Stop all requests immediately.
             * In flight requests will likely fail.
             */
            void DisableRequestProcessing();

            /**
             * Enable/ReEnable requests.
             */
            void EnableRequestProcessing();

            inline virtual const char* GetServiceClientName() const { return m_serviceName.c_str(); }
            /**
             * service client name is part of userAgent.
             * We need to update userAgent after setting this name if it's not pre-set by customer.
             * Note: this API should only be called in your extended class constructors.
             */
            virtual void SetServiceClientName(const Aws::String& name);

        protected:
            /**
             * Calls AttemptOneRequest until it either, succeeds, runs out of retries from the retry strategy,
             * or encounters and error that is not retryable.
             */
            HttpResponseOutcome AttemptExhaustively(const Aws::Http::URI& uri,
                    const Aws::AmazonWebServiceRequest& request,
                    Http::HttpMethod httpMethod,
                    const char* signerName,
                    const char* signerRegionOverride = nullptr,
                    const char* signerServiceNameOverride = nullptr) const;

            /**
             * Calls AttemptOneRequest until it either, succeeds, runs out of retries from the retry strategy,
             * or encounters and error that is not retryable. This method is for payloadless requests e.g. GET, DELETE, HEAD
             *
             * requestName is used for metrics and defaults to empty string, to avoid empty names in metrics provide a valid
             * name.
             */
            HttpResponseOutcome AttemptExhaustively(const Aws::Http::URI& uri,
                    Http::HttpMethod httpMethod,
                    const char* signerName,
                    const char* requestName = "",
                    const char* signerRegionOverride = nullptr,
                    const char* signerServiceNameOverride = nullptr) const;

            /**
             * Build an Http Request from the AmazonWebServiceRequest object. Signs the request, sends it across the wire
             * then reports the http response.
             */
            HttpResponseOutcome AttemptOneRequest(const std::shared_ptr<Http::HttpRequest>& httpRequest,
                    const Aws::AmazonWebServiceRequest& request,
                    const char* signerName,
                    const char* signerRegionOverride = nullptr,
                    const char* signerServiceNameOverride = nullptr) const;

            /**
             * Signs an Http Request, sends it across the wire
             * then reports the http response. This method is for payloadless requests e.g. GET, DELETE, HEAD
             *
             * requestName is used for metrics and defaults to empty string, to avoid empty names in metrics provide a valid
             * name.
             */
            HttpResponseOutcome AttemptOneRequest(const std::shared_ptr<Http::HttpRequest>& httpRequest,
                    const char* signerName,
                    const char* requestName = "",
                    const char* signerRegionOverride = nullptr,
                    const char* signerServiceNameOverride = nullptr) const;

            /**
             * This is used for structureless response payloads (file streams, binary data etc...). It calls AttemptExhaustively, but upon
             * return transfers ownership of the underlying stream for the http response to the caller.
             */
            StreamOutcome MakeRequestWithUnparsedResponse(const Aws::Http::URI& uri,
                    const Aws::AmazonWebServiceRequest& request,
                    Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
                    const char* signerName = Aws::Auth::SIGV4_SIGNER,
                    const char* signerRegionOverride = nullptr,
                    const char* signerServiceNameOverride = nullptr) const;

            /**
             * This is used for structureless response payloads (file streams, binary data etc...). It calls AttemptExhaustively, but upon
             * return transfers ownership of the underlying stream for the http response to the caller.
             *
             * requestName is used for metrics and defaults to empty string, to avoid empty names in metrics provide a valid
             * name.
             */
            StreamOutcome MakeRequestWithUnparsedResponse(const Aws::Http::URI& uri,
                    Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
                    const char* signerName = Aws::Auth::SIGV4_SIGNER,
                    const char* requestName = "",
                    const char* signerRegionOverride = nullptr,
                    const char* signerServiceNameOverride = nullptr) const;

            /**
             * Abstract.  Subclassing clients should override this to tell the client how to marshall error payloads
             */
            virtual AWSError<CoreErrors> BuildAWSError(const std::shared_ptr<Aws::Http::HttpResponse>& response) const = 0;

            /**
             * Transforms the AmazonWebServicesResult object into an HttpRequest.
             */
            virtual void BuildHttpRequest(const Aws::AmazonWebServiceRequest& request,
                    const std::shared_ptr<Aws::Http::HttpRequest>& httpRequest) const;

            /**
             *  Gets the underlying ErrorMarshaller for subclasses to use.
             */
            const std::shared_ptr<AWSErrorMarshaller>& GetErrorMarshaller() const
            {
                return m_errorMarshaller;
            }

            /**
             * Gets the corresponding signer from the signers map by name.
             */
            Aws::Client::AWSAuthSigner* GetSignerByName(const char* name) const;
        protected:

            /**
              * Creates an HttpRequest instance with the given URI and sets the proper headers from the
              * AmazonWebRequest, and finally signs that request with the given the signer.
              * The similar member function BuildHttpRequest() does not sign the request.
              * This member function is used internally only by clients that perform requests (input operations) using
              * event-streams.
              */
            std::shared_ptr<Aws::Http::HttpRequest> BuildAndSignHttpRequest(const Aws::Http::URI& uri,
                                                    const Aws::AmazonWebServiceRequest& request,
                                                    Http::HttpMethod method, const char* signerName) const;

            /**
             * Performs the HTTP request via the HTTP client while enforcing rate limiters
             */
            std::shared_ptr<Aws::Http::HttpResponse> MakeHttpRequest(std::shared_ptr<Aws::Http::HttpRequest>& request) const;
            Aws::String m_region;

            /**
             * Adds "X-Amzn-Trace-Id" header with the value of _X_AMZN_TRACE_ID if both
             * environment variables AWS_LAMBDA_FUNCTION_NAME and _X_AMZN_TRACE_ID are set.
             * Does not add/modify header "X-Amzn-Trace-Id" if it is already set.
             */
            static void AppendRecursionDetectionHeader(std::shared_ptr<Aws::Http::HttpRequest> ioRequest);
        private:
            /**
             * Try to adjust signer's clock
             * return true if signer's clock is adjusted, false otherwise.
             */
            bool AdjustClockSkew(HttpResponseOutcome& outcome, const char* signerName) const;
            void AddHeadersToRequest(const std::shared_ptr<Aws::Http::HttpRequest>& httpRequest, const Http::HeaderValueCollection& headerValues) const;
            void AddChecksumToRequest(const std::shared_ptr<Aws::Http::HttpRequest>& HttpRequest, const Aws::AmazonWebServiceRequest& request) const;
            void AddContentBodyToRequest(const std::shared_ptr<Aws::Http::HttpRequest>& httpRequest, const std::shared_ptr<Aws::IOStream>& body,
                                         bool needsContentMd5 = false, bool isChunked = false) const;
            void AddCommonHeaders(Aws::Http::HttpRequest& httpRequest) const;
            void InitializeGlobalStatics();
            std::shared_ptr<Aws::Http::HttpRequest> ConvertToRequestForPresigning(const Aws::AmazonWebServiceRequest& request, Aws::Http::URI& uri,
                Aws::Http::HttpMethod method, const Aws::Http::QueryStringParameterCollection& extraParams) const;
            std::shared_ptr<Aws::IOStream> GetBodyStream(const Aws::AmazonWebServiceRequest& request) const;

            std::shared_ptr<Aws::Http::HttpClient> m_httpClient;
            std::shared_ptr<Aws::Auth::AWSAuthSignerProvider> m_signerProvider;
            std::shared_ptr<AWSErrorMarshaller> m_errorMarshaller;
            std::shared_ptr<RetryStrategy> m_retryStrategy;
            std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> m_writeRateLimiter;
            std::shared_ptr<Aws::Utils::RateLimits::RateLimiterInterface> m_readRateLimiter;
            Aws::String m_userAgent;
            bool m_customizedUserAgent;
            std::shared_ptr<Aws::Utils::Crypto::Hash> m_hash;
            long m_requestTimeoutMs;
            bool m_enableClockSkewAdjustment;
            Aws::String m_serviceName;
        };

        typedef Utils::Outcome<AmazonWebServiceResult<Utils::Json::JsonValue>, AWSError<CoreErrors>> JsonOutcome;
        AWS_CORE_API Aws::String GetAuthorizationHeader(const Aws::Http::HttpRequest& httpRequest);

        /**
         *  AWSClient that handles marshalling json response bodies. You would inherit from this class
         *  to create a client that uses Json as its payload format.
         */
        class AWS_CORE_API AWSJsonClient : public AWSClient
        {
        public:
            typedef AWSClient BASECLASS;

            /**
             * Simply calls AWSClient constructor.
             */
            AWSJsonClient(const Aws::Client::ClientConfiguration& configuration,
                const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer,
                const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller);

            /**
             * Simply calls AWSClient constructor.
             */
            AWSJsonClient(const Aws::Client::ClientConfiguration& configuration,
                    const std::shared_ptr<Aws::Auth::AWSAuthSignerProvider>& signerProvider,
                    const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller);

            virtual ~AWSJsonClient() = default;

        protected:
            /**
             * Converts/Parses an http response into a meaningful AWSError object using the json message structure.
             */
            virtual AWSError<CoreErrors> BuildAWSError(const std::shared_ptr<Aws::Http::HttpResponse>& response) const override;

            /**
             * Returns a Json document or an error from the request. Does some marshalling json and raw streams,
             * then just calls AttemptExhaustively.
             *
             * method defaults to POST
             */
            JsonOutcome MakeRequest(const Aws::Http::URI& uri,
                const Aws::AmazonWebServiceRequest& request,
                Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
                const char* signerName = Aws::Auth::SIGV4_SIGNER,
                const char* signerRegionOverride = nullptr,
                const char* signerServiceNameOverride = nullptr) const;

            /**
             * Returns a Json document or an error from the request. Does some marshalling json and raw streams,
             * then just calls AttemptExhaustively.
             *
             * requestName is used for metrics and defaults to empty string, to avoid empty names in metrics provide a valid
             * name.
             *
             * method defaults to POST
             */
            JsonOutcome MakeRequest(const Aws::Http::URI& uri,
                Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
                const char* signerName = Aws::Auth::SIGV4_SIGNER,
                const char* requestName = "",
                const char* signerRegionOverride = nullptr,
                const char* signerServiceNameOverride = nullptr) const;

            JsonOutcome MakeEventStreamRequest(std::shared_ptr<Aws::Http::HttpRequest>& request) const;
        };

        typedef Utils::Outcome<AmazonWebServiceResult<Utils::Xml::XmlDocument>, AWSError<CoreErrors>> XmlOutcome;

        /**
        *  AWSClient that handles marshalling xml response bodies. You would inherit from this class
        *  to create a client that uses Xml as its payload format.
        */
        class AWS_CORE_API AWSXMLClient : public AWSClient
        {
        public:

            typedef AWSClient BASECLASS;

            AWSXMLClient(const Aws::Client::ClientConfiguration& configuration,
                const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer,
                const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller);

            AWSXMLClient(const Aws::Client::ClientConfiguration& configuration,
                const std::shared_ptr<Aws::Auth::AWSAuthSignerProvider>& signerProvider,
                const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller);

            virtual ~AWSXMLClient() = default;

        protected:
            /**
             * Converts/Parses an http response into a meaningful AWSError object. Using the XML message structure.
             */
            virtual AWSError<CoreErrors> BuildAWSError(const std::shared_ptr<Aws::Http::HttpResponse>& response) const override;

            /**
             * Returns an xml document or an error from the request. Does some marshalling xml and raw streams,
             * then just calls AttemptExhaustively.
             *
             * method defaults to POST
             */
            XmlOutcome MakeRequest(const Aws::Http::URI& uri,
                const Aws::AmazonWebServiceRequest& request,
                Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
                const char* signerName = Aws::Auth::SIGV4_SIGNER,
                const char* signerRegionOverride = nullptr,
                const char* signerServiceNameOverride = nullptr) const;


            /**
             * Returns an xml document or an error from the request. Does some marshalling xml and raw streams,
             * then just calls AttemptExhaustively.
             *
             * requestName is used for metrics and defaults to empty string, to avoid empty names in metrics provide a valid
             * name.
             *
             * method defaults to POST
             */
            XmlOutcome MakeRequest(const Aws::Http::URI& uri,
                Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
                const char* signerName = Aws::Auth::SIGV4_SIGNER,
                const char* requestName = "",
                const char* signerRegionOverride = nullptr,
                const char* signerServiceNameOverride = nullptr) const;

            /**
            * This is used for event stream response.
            */
            XmlOutcome MakeRequestWithEventStream(const Aws::Http::URI& uri,
                const Aws::AmazonWebServiceRequest& request,
                Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
                const char* singerName = Aws::Auth::SIGV4_SIGNER,
                const char* signerRegionOverride = nullptr,
                const char* signerServiceNameOverride = nullptr) const;

            /**
            * This is used for event stream response.
            * requestName is used for metrics and defaults to empty string, to avoid empty names in metrics provide a valid
            * name.
            */
            XmlOutcome MakeRequestWithEventStream(const Aws::Http::URI& uri,
                Http::HttpMethod method = Http::HttpMethod::HTTP_POST,
                const char* signerName = Aws::Auth::SIGV4_SIGNER,
                const char* requestName = "",
                const char* signerRegionOverride = nullptr,
                const char* signerServiceNameOverride = nullptr) const;
        };

    } // namespace Client
} // namespace Aws

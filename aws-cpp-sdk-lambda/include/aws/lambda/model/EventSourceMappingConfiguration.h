﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/EventSourcePosition.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lambda/model/FilterCriteria.h>
#include <aws/lambda/model/DestinationConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/SelfManagedEventSource.h>
#include <aws/lambda/model/AmazonManagedKafkaEventSourceConfig.h>
#include <aws/lambda/model/SelfManagedKafkaEventSourceConfig.h>
#include <aws/lambda/model/SourceAccessConfiguration.h>
#include <aws/lambda/model/FunctionResponseType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>A mapping between an Amazon Web Services resource and a Lambda function. For
   * details, see <a>CreateEventSourceMapping</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/EventSourceMappingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API EventSourceMappingConfiguration
  {
  public:
    EventSourceMappingConfiguration();
    EventSourceMappingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    EventSourceMappingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline const Aws::String& GetUUID() const{ return m_uUID; }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline bool UUIDHasBeenSet() const { return m_uUIDHasBeenSet; }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline void SetUUID(const Aws::String& value) { m_uUIDHasBeenSet = true; m_uUID = value; }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline void SetUUID(Aws::String&& value) { m_uUIDHasBeenSet = true; m_uUID = std::move(value); }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline void SetUUID(const char* value) { m_uUIDHasBeenSet = true; m_uUID.assign(value); }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline EventSourceMappingConfiguration& WithUUID(const Aws::String& value) { SetUUID(value); return *this;}

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline EventSourceMappingConfiguration& WithUUID(Aws::String&& value) { SetUUID(std::move(value)); return *this;}

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline EventSourceMappingConfiguration& WithUUID(const char* value) { SetUUID(value); return *this;}


    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis, Amazon DynamoDB, and Amazon MSK stream sources.
     * <code>AT_TIMESTAMP</code> is supported only for Amazon Kinesis streams.</p>
     */
    inline const EventSourcePosition& GetStartingPosition() const{ return m_startingPosition; }

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis, Amazon DynamoDB, and Amazon MSK stream sources.
     * <code>AT_TIMESTAMP</code> is supported only for Amazon Kinesis streams.</p>
     */
    inline bool StartingPositionHasBeenSet() const { return m_startingPositionHasBeenSet; }

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis, Amazon DynamoDB, and Amazon MSK stream sources.
     * <code>AT_TIMESTAMP</code> is supported only for Amazon Kinesis streams.</p>
     */
    inline void SetStartingPosition(const EventSourcePosition& value) { m_startingPositionHasBeenSet = true; m_startingPosition = value; }

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis, Amazon DynamoDB, and Amazon MSK stream sources.
     * <code>AT_TIMESTAMP</code> is supported only for Amazon Kinesis streams.</p>
     */
    inline void SetStartingPosition(EventSourcePosition&& value) { m_startingPositionHasBeenSet = true; m_startingPosition = std::move(value); }

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis, Amazon DynamoDB, and Amazon MSK stream sources.
     * <code>AT_TIMESTAMP</code> is supported only for Amazon Kinesis streams.</p>
     */
    inline EventSourceMappingConfiguration& WithStartingPosition(const EventSourcePosition& value) { SetStartingPosition(value); return *this;}

    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis, Amazon DynamoDB, and Amazon MSK stream sources.
     * <code>AT_TIMESTAMP</code> is supported only for Amazon Kinesis streams.</p>
     */
    inline EventSourceMappingConfiguration& WithStartingPosition(EventSourcePosition&& value) { SetStartingPosition(std::move(value)); return *this;}


    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline const Aws::Utils::DateTime& GetStartingPositionTimestamp() const{ return m_startingPositionTimestamp; }

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline bool StartingPositionTimestampHasBeenSet() const { return m_startingPositionTimestampHasBeenSet; }

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline void SetStartingPositionTimestamp(const Aws::Utils::DateTime& value) { m_startingPositionTimestampHasBeenSet = true; m_startingPositionTimestamp = value; }

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline void SetStartingPositionTimestamp(Aws::Utils::DateTime&& value) { m_startingPositionTimestampHasBeenSet = true; m_startingPositionTimestamp = std::move(value); }

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline EventSourceMappingConfiguration& WithStartingPositionTimestamp(const Aws::Utils::DateTime& value) { SetStartingPositionTimestamp(value); return *this;}

    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading.</p>
     */
    inline EventSourceMappingConfiguration& WithStartingPositionTimestamp(Aws::Utils::DateTime&& value) { SetStartingPositionTimestamp(std::move(value)); return *this;}


    /**
     * <p>The maximum number of records in each batch that Lambda pulls from your
     * stream or queue and sends to your function. Lambda passes all of the records in
     * the batch to the function in a single call, up to the payload limit for
     * synchronous invocation (6 MB).</p> <p>Default value: Varies by service. For
     * Amazon SQS, the default is 10. For all other services, the default is 100.</p>
     * <p>Related setting: When you set <code>BatchSize</code> to a value greater than
     * 10, you must set <code>MaximumBatchingWindowInSeconds</code> to at least 1.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>The maximum number of records in each batch that Lambda pulls from your
     * stream or queue and sends to your function. Lambda passes all of the records in
     * the batch to the function in a single call, up to the payload limit for
     * synchronous invocation (6 MB).</p> <p>Default value: Varies by service. For
     * Amazon SQS, the default is 10. For all other services, the default is 100.</p>
     * <p>Related setting: When you set <code>BatchSize</code> to a value greater than
     * 10, you must set <code>MaximumBatchingWindowInSeconds</code> to at least 1.</p>
     */
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }

    /**
     * <p>The maximum number of records in each batch that Lambda pulls from your
     * stream or queue and sends to your function. Lambda passes all of the records in
     * the batch to the function in a single call, up to the payload limit for
     * synchronous invocation (6 MB).</p> <p>Default value: Varies by service. For
     * Amazon SQS, the default is 10. For all other services, the default is 100.</p>
     * <p>Related setting: When you set <code>BatchSize</code> to a value greater than
     * 10, you must set <code>MaximumBatchingWindowInSeconds</code> to at least 1.</p>
     */
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }

    /**
     * <p>The maximum number of records in each batch that Lambda pulls from your
     * stream or queue and sends to your function. Lambda passes all of the records in
     * the batch to the function in a single call, up to the payload limit for
     * synchronous invocation (6 MB).</p> <p>Default value: Varies by service. For
     * Amazon SQS, the default is 10. For all other services, the default is 100.</p>
     * <p>Related setting: When you set <code>BatchSize</code> to a value greater than
     * 10, you must set <code>MaximumBatchingWindowInSeconds</code> to at least 1.</p>
     */
    inline EventSourceMappingConfiguration& WithBatchSize(int value) { SetBatchSize(value); return *this;}


    /**
     * <p>(Streams and Amazon SQS standard queues) The maximum amount of time, in
     * seconds, that Lambda spends gathering records before invoking the function.</p>
     * <p>Default: 0</p> <p>Related setting: When you set <code>BatchSize</code> to a
     * value greater than 10, you must set <code>MaximumBatchingWindowInSeconds</code>
     * to at least 1.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const{ return m_maximumBatchingWindowInSeconds; }

    /**
     * <p>(Streams and Amazon SQS standard queues) The maximum amount of time, in
     * seconds, that Lambda spends gathering records before invoking the function.</p>
     * <p>Default: 0</p> <p>Related setting: When you set <code>BatchSize</code> to a
     * value greater than 10, you must set <code>MaximumBatchingWindowInSeconds</code>
     * to at least 1.</p>
     */
    inline bool MaximumBatchingWindowInSecondsHasBeenSet() const { return m_maximumBatchingWindowInSecondsHasBeenSet; }

    /**
     * <p>(Streams and Amazon SQS standard queues) The maximum amount of time, in
     * seconds, that Lambda spends gathering records before invoking the function.</p>
     * <p>Default: 0</p> <p>Related setting: When you set <code>BatchSize</code> to a
     * value greater than 10, you must set <code>MaximumBatchingWindowInSeconds</code>
     * to at least 1.</p>
     */
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSecondsHasBeenSet = true; m_maximumBatchingWindowInSeconds = value; }

    /**
     * <p>(Streams and Amazon SQS standard queues) The maximum amount of time, in
     * seconds, that Lambda spends gathering records before invoking the function.</p>
     * <p>Default: 0</p> <p>Related setting: When you set <code>BatchSize</code> to a
     * value greater than 10, you must set <code>MaximumBatchingWindowInSeconds</code>
     * to at least 1.</p>
     */
    inline EventSourceMappingConfiguration& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}


    /**
     * <p>(Streams only) The number of batches to process concurrently from each shard.
     * The default value is 1.</p>
     */
    inline int GetParallelizationFactor() const{ return m_parallelizationFactor; }

    /**
     * <p>(Streams only) The number of batches to process concurrently from each shard.
     * The default value is 1.</p>
     */
    inline bool ParallelizationFactorHasBeenSet() const { return m_parallelizationFactorHasBeenSet; }

    /**
     * <p>(Streams only) The number of batches to process concurrently from each shard.
     * The default value is 1.</p>
     */
    inline void SetParallelizationFactor(int value) { m_parallelizationFactorHasBeenSet = true; m_parallelizationFactor = value; }

    /**
     * <p>(Streams only) The number of batches to process concurrently from each shard.
     * The default value is 1.</p>
     */
    inline EventSourceMappingConfiguration& WithParallelizationFactor(int value) { SetParallelizationFactor(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline bool EventSourceArnHasBeenSet() const { return m_eventSourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline void SetEventSourceArn(const char* value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline EventSourceMappingConfiguration& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline EventSourceMappingConfiguration& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline EventSourceMappingConfiguration& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}


    /**
     * <p>(Streams and Amazon SQS) An object that defines the filter criteria that
     * determine whether Lambda should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline const FilterCriteria& GetFilterCriteria() const{ return m_filterCriteria; }

    /**
     * <p>(Streams and Amazon SQS) An object that defines the filter criteria that
     * determine whether Lambda should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }

    /**
     * <p>(Streams and Amazon SQS) An object that defines the filter criteria that
     * determine whether Lambda should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline void SetFilterCriteria(const FilterCriteria& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = value; }

    /**
     * <p>(Streams and Amazon SQS) An object that defines the filter criteria that
     * determine whether Lambda should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline void SetFilterCriteria(FilterCriteria&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::move(value); }

    /**
     * <p>(Streams and Amazon SQS) An object that defines the filter criteria that
     * determine whether Lambda should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline EventSourceMappingConfiguration& WithFilterCriteria(const FilterCriteria& value) { SetFilterCriteria(value); return *this;}

    /**
     * <p>(Streams and Amazon SQS) An object that defines the filter criteria that
     * determine whether Lambda should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline EventSourceMappingConfiguration& WithFilterCriteria(FilterCriteria&& value) { SetFilterCriteria(std::move(value)); return *this;}


    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline EventSourceMappingConfiguration& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline EventSourceMappingConfiguration& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline EventSourceMappingConfiguration& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>The date that the event source mapping was last updated or that its state
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date that the event source mapping was last updated or that its state
     * changed.</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>The date that the event source mapping was last updated or that its state
     * changed.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>The date that the event source mapping was last updated or that its state
     * changed.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>The date that the event source mapping was last updated or that its state
     * changed.</p>
     */
    inline EventSourceMappingConfiguration& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date that the event source mapping was last updated or that its state
     * changed.</p>
     */
    inline EventSourceMappingConfiguration& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>The result of the last Lambda invocation of your function.</p>
     */
    inline const Aws::String& GetLastProcessingResult() const{ return m_lastProcessingResult; }

    /**
     * <p>The result of the last Lambda invocation of your function.</p>
     */
    inline bool LastProcessingResultHasBeenSet() const { return m_lastProcessingResultHasBeenSet; }

    /**
     * <p>The result of the last Lambda invocation of your function.</p>
     */
    inline void SetLastProcessingResult(const Aws::String& value) { m_lastProcessingResultHasBeenSet = true; m_lastProcessingResult = value; }

    /**
     * <p>The result of the last Lambda invocation of your function.</p>
     */
    inline void SetLastProcessingResult(Aws::String&& value) { m_lastProcessingResultHasBeenSet = true; m_lastProcessingResult = std::move(value); }

    /**
     * <p>The result of the last Lambda invocation of your function.</p>
     */
    inline void SetLastProcessingResult(const char* value) { m_lastProcessingResultHasBeenSet = true; m_lastProcessingResult.assign(value); }

    /**
     * <p>The result of the last Lambda invocation of your function.</p>
     */
    inline EventSourceMappingConfiguration& WithLastProcessingResult(const Aws::String& value) { SetLastProcessingResult(value); return *this;}

    /**
     * <p>The result of the last Lambda invocation of your function.</p>
     */
    inline EventSourceMappingConfiguration& WithLastProcessingResult(Aws::String&& value) { SetLastProcessingResult(std::move(value)); return *this;}

    /**
     * <p>The result of the last Lambda invocation of your function.</p>
     */
    inline EventSourceMappingConfiguration& WithLastProcessingResult(const char* value) { SetLastProcessingResult(value); return *this;}


    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline EventSourceMappingConfiguration& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline EventSourceMappingConfiguration& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline EventSourceMappingConfiguration& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>Indicates whether a user or Lambda made the last change to the event source
     * mapping.</p>
     */
    inline const Aws::String& GetStateTransitionReason() const{ return m_stateTransitionReason; }

    /**
     * <p>Indicates whether a user or Lambda made the last change to the event source
     * mapping.</p>
     */
    inline bool StateTransitionReasonHasBeenSet() const { return m_stateTransitionReasonHasBeenSet; }

    /**
     * <p>Indicates whether a user or Lambda made the last change to the event source
     * mapping.</p>
     */
    inline void SetStateTransitionReason(const Aws::String& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = value; }

    /**
     * <p>Indicates whether a user or Lambda made the last change to the event source
     * mapping.</p>
     */
    inline void SetStateTransitionReason(Aws::String&& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = std::move(value); }

    /**
     * <p>Indicates whether a user or Lambda made the last change to the event source
     * mapping.</p>
     */
    inline void SetStateTransitionReason(const char* value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason.assign(value); }

    /**
     * <p>Indicates whether a user or Lambda made the last change to the event source
     * mapping.</p>
     */
    inline EventSourceMappingConfiguration& WithStateTransitionReason(const Aws::String& value) { SetStateTransitionReason(value); return *this;}

    /**
     * <p>Indicates whether a user or Lambda made the last change to the event source
     * mapping.</p>
     */
    inline EventSourceMappingConfiguration& WithStateTransitionReason(Aws::String&& value) { SetStateTransitionReason(std::move(value)); return *this;}

    /**
     * <p>Indicates whether a user or Lambda made the last change to the event source
     * mapping.</p>
     */
    inline EventSourceMappingConfiguration& WithStateTransitionReason(const char* value) { SetStateTransitionReason(value); return *this;}


    /**
     * <p>(Streams only) An Amazon SQS queue or Amazon SNS topic destination for
     * discarded records.</p>
     */
    inline const DestinationConfig& GetDestinationConfig() const{ return m_destinationConfig; }

    /**
     * <p>(Streams only) An Amazon SQS queue or Amazon SNS topic destination for
     * discarded records.</p>
     */
    inline bool DestinationConfigHasBeenSet() const { return m_destinationConfigHasBeenSet; }

    /**
     * <p>(Streams only) An Amazon SQS queue or Amazon SNS topic destination for
     * discarded records.</p>
     */
    inline void SetDestinationConfig(const DestinationConfig& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = value; }

    /**
     * <p>(Streams only) An Amazon SQS queue or Amazon SNS topic destination for
     * discarded records.</p>
     */
    inline void SetDestinationConfig(DestinationConfig&& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = std::move(value); }

    /**
     * <p>(Streams only) An Amazon SQS queue or Amazon SNS topic destination for
     * discarded records.</p>
     */
    inline EventSourceMappingConfiguration& WithDestinationConfig(const DestinationConfig& value) { SetDestinationConfig(value); return *this;}

    /**
     * <p>(Streams only) An Amazon SQS queue or Amazon SNS topic destination for
     * discarded records.</p>
     */
    inline EventSourceMappingConfiguration& WithDestinationConfig(DestinationConfig&& value) { SetDestinationConfig(std::move(value)); return *this;}


    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTopics() const{ return m_topics; }

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline bool TopicsHasBeenSet() const { return m_topicsHasBeenSet; }

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline void SetTopics(const Aws::Vector<Aws::String>& value) { m_topicsHasBeenSet = true; m_topics = value; }

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline void SetTopics(Aws::Vector<Aws::String>&& value) { m_topicsHasBeenSet = true; m_topics = std::move(value); }

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline EventSourceMappingConfiguration& WithTopics(const Aws::Vector<Aws::String>& value) { SetTopics(value); return *this;}

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline EventSourceMappingConfiguration& WithTopics(Aws::Vector<Aws::String>&& value) { SetTopics(std::move(value)); return *this;}

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline EventSourceMappingConfiguration& AddTopics(const Aws::String& value) { m_topicsHasBeenSet = true; m_topics.push_back(value); return *this; }

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline EventSourceMappingConfiguration& AddTopics(Aws::String&& value) { m_topicsHasBeenSet = true; m_topics.push_back(std::move(value)); return *this; }

    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline EventSourceMappingConfiguration& AddTopics(const char* value) { m_topicsHasBeenSet = true; m_topics.push_back(value); return *this; }


    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueues() const{ return m_queues; }

    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline bool QueuesHasBeenSet() const { return m_queuesHasBeenSet; }

    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline void SetQueues(const Aws::Vector<Aws::String>& value) { m_queuesHasBeenSet = true; m_queues = value; }

    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline void SetQueues(Aws::Vector<Aws::String>&& value) { m_queuesHasBeenSet = true; m_queues = std::move(value); }

    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline EventSourceMappingConfiguration& WithQueues(const Aws::Vector<Aws::String>& value) { SetQueues(value); return *this;}

    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline EventSourceMappingConfiguration& WithQueues(Aws::Vector<Aws::String>&& value) { SetQueues(std::move(value)); return *this;}

    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline EventSourceMappingConfiguration& AddQueues(const Aws::String& value) { m_queuesHasBeenSet = true; m_queues.push_back(value); return *this; }

    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline EventSourceMappingConfiguration& AddQueues(Aws::String&& value) { m_queuesHasBeenSet = true; m_queues.push_back(std::move(value)); return *this; }

    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline EventSourceMappingConfiguration& AddQueues(const char* value) { m_queuesHasBeenSet = true; m_queues.push_back(value); return *this; }


    /**
     * <p>An array of the authentication protocol, VPC components, or virtual host to
     * secure and define your event source.</p>
     */
    inline const Aws::Vector<SourceAccessConfiguration>& GetSourceAccessConfigurations() const{ return m_sourceAccessConfigurations; }

    /**
     * <p>An array of the authentication protocol, VPC components, or virtual host to
     * secure and define your event source.</p>
     */
    inline bool SourceAccessConfigurationsHasBeenSet() const { return m_sourceAccessConfigurationsHasBeenSet; }

    /**
     * <p>An array of the authentication protocol, VPC components, or virtual host to
     * secure and define your event source.</p>
     */
    inline void SetSourceAccessConfigurations(const Aws::Vector<SourceAccessConfiguration>& value) { m_sourceAccessConfigurationsHasBeenSet = true; m_sourceAccessConfigurations = value; }

    /**
     * <p>An array of the authentication protocol, VPC components, or virtual host to
     * secure and define your event source.</p>
     */
    inline void SetSourceAccessConfigurations(Aws::Vector<SourceAccessConfiguration>&& value) { m_sourceAccessConfigurationsHasBeenSet = true; m_sourceAccessConfigurations = std::move(value); }

    /**
     * <p>An array of the authentication protocol, VPC components, or virtual host to
     * secure and define your event source.</p>
     */
    inline EventSourceMappingConfiguration& WithSourceAccessConfigurations(const Aws::Vector<SourceAccessConfiguration>& value) { SetSourceAccessConfigurations(value); return *this;}

    /**
     * <p>An array of the authentication protocol, VPC components, or virtual host to
     * secure and define your event source.</p>
     */
    inline EventSourceMappingConfiguration& WithSourceAccessConfigurations(Aws::Vector<SourceAccessConfiguration>&& value) { SetSourceAccessConfigurations(std::move(value)); return *this;}

    /**
     * <p>An array of the authentication protocol, VPC components, or virtual host to
     * secure and define your event source.</p>
     */
    inline EventSourceMappingConfiguration& AddSourceAccessConfigurations(const SourceAccessConfiguration& value) { m_sourceAccessConfigurationsHasBeenSet = true; m_sourceAccessConfigurations.push_back(value); return *this; }

    /**
     * <p>An array of the authentication protocol, VPC components, or virtual host to
     * secure and define your event source.</p>
     */
    inline EventSourceMappingConfiguration& AddSourceAccessConfigurations(SourceAccessConfiguration&& value) { m_sourceAccessConfigurationsHasBeenSet = true; m_sourceAccessConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The self-managed Apache Kafka cluster for your event source.</p>
     */
    inline const SelfManagedEventSource& GetSelfManagedEventSource() const{ return m_selfManagedEventSource; }

    /**
     * <p>The self-managed Apache Kafka cluster for your event source.</p>
     */
    inline bool SelfManagedEventSourceHasBeenSet() const { return m_selfManagedEventSourceHasBeenSet; }

    /**
     * <p>The self-managed Apache Kafka cluster for your event source.</p>
     */
    inline void SetSelfManagedEventSource(const SelfManagedEventSource& value) { m_selfManagedEventSourceHasBeenSet = true; m_selfManagedEventSource = value; }

    /**
     * <p>The self-managed Apache Kafka cluster for your event source.</p>
     */
    inline void SetSelfManagedEventSource(SelfManagedEventSource&& value) { m_selfManagedEventSourceHasBeenSet = true; m_selfManagedEventSource = std::move(value); }

    /**
     * <p>The self-managed Apache Kafka cluster for your event source.</p>
     */
    inline EventSourceMappingConfiguration& WithSelfManagedEventSource(const SelfManagedEventSource& value) { SetSelfManagedEventSource(value); return *this;}

    /**
     * <p>The self-managed Apache Kafka cluster for your event source.</p>
     */
    inline EventSourceMappingConfiguration& WithSelfManagedEventSource(SelfManagedEventSource&& value) { SetSelfManagedEventSource(std::move(value)); return *this;}


    /**
     * <p>(Streams only) Discard records older than the specified age. The default
     * value is -1, which sets the maximum age to infinite. When the value is set to
     * infinite, Lambda never discards old records. </p>
     */
    inline int GetMaximumRecordAgeInSeconds() const{ return m_maximumRecordAgeInSeconds; }

    /**
     * <p>(Streams only) Discard records older than the specified age. The default
     * value is -1, which sets the maximum age to infinite. When the value is set to
     * infinite, Lambda never discards old records. </p>
     */
    inline bool MaximumRecordAgeInSecondsHasBeenSet() const { return m_maximumRecordAgeInSecondsHasBeenSet; }

    /**
     * <p>(Streams only) Discard records older than the specified age. The default
     * value is -1, which sets the maximum age to infinite. When the value is set to
     * infinite, Lambda never discards old records. </p>
     */
    inline void SetMaximumRecordAgeInSeconds(int value) { m_maximumRecordAgeInSecondsHasBeenSet = true; m_maximumRecordAgeInSeconds = value; }

    /**
     * <p>(Streams only) Discard records older than the specified age. The default
     * value is -1, which sets the maximum age to infinite. When the value is set to
     * infinite, Lambda never discards old records. </p>
     */
    inline EventSourceMappingConfiguration& WithMaximumRecordAgeInSeconds(int value) { SetMaximumRecordAgeInSeconds(value); return *this;}


    /**
     * <p>(Streams only) If the function returns an error, split the batch in two and
     * retry. The default value is false.</p>
     */
    inline bool GetBisectBatchOnFunctionError() const{ return m_bisectBatchOnFunctionError; }

    /**
     * <p>(Streams only) If the function returns an error, split the batch in two and
     * retry. The default value is false.</p>
     */
    inline bool BisectBatchOnFunctionErrorHasBeenSet() const { return m_bisectBatchOnFunctionErrorHasBeenSet; }

    /**
     * <p>(Streams only) If the function returns an error, split the batch in two and
     * retry. The default value is false.</p>
     */
    inline void SetBisectBatchOnFunctionError(bool value) { m_bisectBatchOnFunctionErrorHasBeenSet = true; m_bisectBatchOnFunctionError = value; }

    /**
     * <p>(Streams only) If the function returns an error, split the batch in two and
     * retry. The default value is false.</p>
     */
    inline EventSourceMappingConfiguration& WithBisectBatchOnFunctionError(bool value) { SetBisectBatchOnFunctionError(value); return *this;}


    /**
     * <p>(Streams only) Discard records after the specified number of retries. The
     * default value is -1, which sets the maximum number of retries to infinite. When
     * MaximumRetryAttempts is infinite, Lambda retries failed records until the record
     * expires in the event source.</p>
     */
    inline int GetMaximumRetryAttempts() const{ return m_maximumRetryAttempts; }

    /**
     * <p>(Streams only) Discard records after the specified number of retries. The
     * default value is -1, which sets the maximum number of retries to infinite. When
     * MaximumRetryAttempts is infinite, Lambda retries failed records until the record
     * expires in the event source.</p>
     */
    inline bool MaximumRetryAttemptsHasBeenSet() const { return m_maximumRetryAttemptsHasBeenSet; }

    /**
     * <p>(Streams only) Discard records after the specified number of retries. The
     * default value is -1, which sets the maximum number of retries to infinite. When
     * MaximumRetryAttempts is infinite, Lambda retries failed records until the record
     * expires in the event source.</p>
     */
    inline void SetMaximumRetryAttempts(int value) { m_maximumRetryAttemptsHasBeenSet = true; m_maximumRetryAttempts = value; }

    /**
     * <p>(Streams only) Discard records after the specified number of retries. The
     * default value is -1, which sets the maximum number of retries to infinite. When
     * MaximumRetryAttempts is infinite, Lambda retries failed records until the record
     * expires in the event source.</p>
     */
    inline EventSourceMappingConfiguration& WithMaximumRetryAttempts(int value) { SetMaximumRetryAttempts(value); return *this;}


    /**
     * <p>(Streams only) The duration in seconds of a processing window. The range is
     * 1–900 seconds.</p>
     */
    inline int GetTumblingWindowInSeconds() const{ return m_tumblingWindowInSeconds; }

    /**
     * <p>(Streams only) The duration in seconds of a processing window. The range is
     * 1–900 seconds.</p>
     */
    inline bool TumblingWindowInSecondsHasBeenSet() const { return m_tumblingWindowInSecondsHasBeenSet; }

    /**
     * <p>(Streams only) The duration in seconds of a processing window. The range is
     * 1–900 seconds.</p>
     */
    inline void SetTumblingWindowInSeconds(int value) { m_tumblingWindowInSecondsHasBeenSet = true; m_tumblingWindowInSeconds = value; }

    /**
     * <p>(Streams only) The duration in seconds of a processing window. The range is
     * 1–900 seconds.</p>
     */
    inline EventSourceMappingConfiguration& WithTumblingWindowInSeconds(int value) { SetTumblingWindowInSeconds(value); return *this;}


    /**
     * <p>(Streams and Amazon SQS) A list of current response type enums applied to the
     * event source mapping.</p>
     */
    inline const Aws::Vector<FunctionResponseType>& GetFunctionResponseTypes() const{ return m_functionResponseTypes; }

    /**
     * <p>(Streams and Amazon SQS) A list of current response type enums applied to the
     * event source mapping.</p>
     */
    inline bool FunctionResponseTypesHasBeenSet() const { return m_functionResponseTypesHasBeenSet; }

    /**
     * <p>(Streams and Amazon SQS) A list of current response type enums applied to the
     * event source mapping.</p>
     */
    inline void SetFunctionResponseTypes(const Aws::Vector<FunctionResponseType>& value) { m_functionResponseTypesHasBeenSet = true; m_functionResponseTypes = value; }

    /**
     * <p>(Streams and Amazon SQS) A list of current response type enums applied to the
     * event source mapping.</p>
     */
    inline void SetFunctionResponseTypes(Aws::Vector<FunctionResponseType>&& value) { m_functionResponseTypesHasBeenSet = true; m_functionResponseTypes = std::move(value); }

    /**
     * <p>(Streams and Amazon SQS) A list of current response type enums applied to the
     * event source mapping.</p>
     */
    inline EventSourceMappingConfiguration& WithFunctionResponseTypes(const Aws::Vector<FunctionResponseType>& value) { SetFunctionResponseTypes(value); return *this;}

    /**
     * <p>(Streams and Amazon SQS) A list of current response type enums applied to the
     * event source mapping.</p>
     */
    inline EventSourceMappingConfiguration& WithFunctionResponseTypes(Aws::Vector<FunctionResponseType>&& value) { SetFunctionResponseTypes(std::move(value)); return *this;}

    /**
     * <p>(Streams and Amazon SQS) A list of current response type enums applied to the
     * event source mapping.</p>
     */
    inline EventSourceMappingConfiguration& AddFunctionResponseTypes(const FunctionResponseType& value) { m_functionResponseTypesHasBeenSet = true; m_functionResponseTypes.push_back(value); return *this; }

    /**
     * <p>(Streams and Amazon SQS) A list of current response type enums applied to the
     * event source mapping.</p>
     */
    inline EventSourceMappingConfiguration& AddFunctionResponseTypes(FunctionResponseType&& value) { m_functionResponseTypesHasBeenSet = true; m_functionResponseTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Specific configuration settings for an Amazon Managed Streaming for Apache
     * Kafka (Amazon MSK) event source.</p>
     */
    inline const AmazonManagedKafkaEventSourceConfig& GetAmazonManagedKafkaEventSourceConfig() const{ return m_amazonManagedKafkaEventSourceConfig; }

    /**
     * <p>Specific configuration settings for an Amazon Managed Streaming for Apache
     * Kafka (Amazon MSK) event source.</p>
     */
    inline bool AmazonManagedKafkaEventSourceConfigHasBeenSet() const { return m_amazonManagedKafkaEventSourceConfigHasBeenSet; }

    /**
     * <p>Specific configuration settings for an Amazon Managed Streaming for Apache
     * Kafka (Amazon MSK) event source.</p>
     */
    inline void SetAmazonManagedKafkaEventSourceConfig(const AmazonManagedKafkaEventSourceConfig& value) { m_amazonManagedKafkaEventSourceConfigHasBeenSet = true; m_amazonManagedKafkaEventSourceConfig = value; }

    /**
     * <p>Specific configuration settings for an Amazon Managed Streaming for Apache
     * Kafka (Amazon MSK) event source.</p>
     */
    inline void SetAmazonManagedKafkaEventSourceConfig(AmazonManagedKafkaEventSourceConfig&& value) { m_amazonManagedKafkaEventSourceConfigHasBeenSet = true; m_amazonManagedKafkaEventSourceConfig = std::move(value); }

    /**
     * <p>Specific configuration settings for an Amazon Managed Streaming for Apache
     * Kafka (Amazon MSK) event source.</p>
     */
    inline EventSourceMappingConfiguration& WithAmazonManagedKafkaEventSourceConfig(const AmazonManagedKafkaEventSourceConfig& value) { SetAmazonManagedKafkaEventSourceConfig(value); return *this;}

    /**
     * <p>Specific configuration settings for an Amazon Managed Streaming for Apache
     * Kafka (Amazon MSK) event source.</p>
     */
    inline EventSourceMappingConfiguration& WithAmazonManagedKafkaEventSourceConfig(AmazonManagedKafkaEventSourceConfig&& value) { SetAmazonManagedKafkaEventSourceConfig(std::move(value)); return *this;}


    /**
     * <p>Specific configuration settings for a self-managed Apache Kafka event
     * source.</p>
     */
    inline const SelfManagedKafkaEventSourceConfig& GetSelfManagedKafkaEventSourceConfig() const{ return m_selfManagedKafkaEventSourceConfig; }

    /**
     * <p>Specific configuration settings for a self-managed Apache Kafka event
     * source.</p>
     */
    inline bool SelfManagedKafkaEventSourceConfigHasBeenSet() const { return m_selfManagedKafkaEventSourceConfigHasBeenSet; }

    /**
     * <p>Specific configuration settings for a self-managed Apache Kafka event
     * source.</p>
     */
    inline void SetSelfManagedKafkaEventSourceConfig(const SelfManagedKafkaEventSourceConfig& value) { m_selfManagedKafkaEventSourceConfigHasBeenSet = true; m_selfManagedKafkaEventSourceConfig = value; }

    /**
     * <p>Specific configuration settings for a self-managed Apache Kafka event
     * source.</p>
     */
    inline void SetSelfManagedKafkaEventSourceConfig(SelfManagedKafkaEventSourceConfig&& value) { m_selfManagedKafkaEventSourceConfigHasBeenSet = true; m_selfManagedKafkaEventSourceConfig = std::move(value); }

    /**
     * <p>Specific configuration settings for a self-managed Apache Kafka event
     * source.</p>
     */
    inline EventSourceMappingConfiguration& WithSelfManagedKafkaEventSourceConfig(const SelfManagedKafkaEventSourceConfig& value) { SetSelfManagedKafkaEventSourceConfig(value); return *this;}

    /**
     * <p>Specific configuration settings for a self-managed Apache Kafka event
     * source.</p>
     */
    inline EventSourceMappingConfiguration& WithSelfManagedKafkaEventSourceConfig(SelfManagedKafkaEventSourceConfig&& value) { SetSelfManagedKafkaEventSourceConfig(std::move(value)); return *this;}

  private:

    Aws::String m_uUID;
    bool m_uUIDHasBeenSet;

    EventSourcePosition m_startingPosition;
    bool m_startingPositionHasBeenSet;

    Aws::Utils::DateTime m_startingPositionTimestamp;
    bool m_startingPositionTimestampHasBeenSet;

    int m_batchSize;
    bool m_batchSizeHasBeenSet;

    int m_maximumBatchingWindowInSeconds;
    bool m_maximumBatchingWindowInSecondsHasBeenSet;

    int m_parallelizationFactor;
    bool m_parallelizationFactorHasBeenSet;

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet;

    FilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet;

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet;

    Aws::String m_lastProcessingResult;
    bool m_lastProcessingResultHasBeenSet;

    Aws::String m_state;
    bool m_stateHasBeenSet;

    Aws::String m_stateTransitionReason;
    bool m_stateTransitionReasonHasBeenSet;

    DestinationConfig m_destinationConfig;
    bool m_destinationConfigHasBeenSet;

    Aws::Vector<Aws::String> m_topics;
    bool m_topicsHasBeenSet;

    Aws::Vector<Aws::String> m_queues;
    bool m_queuesHasBeenSet;

    Aws::Vector<SourceAccessConfiguration> m_sourceAccessConfigurations;
    bool m_sourceAccessConfigurationsHasBeenSet;

    SelfManagedEventSource m_selfManagedEventSource;
    bool m_selfManagedEventSourceHasBeenSet;

    int m_maximumRecordAgeInSeconds;
    bool m_maximumRecordAgeInSecondsHasBeenSet;

    bool m_bisectBatchOnFunctionError;
    bool m_bisectBatchOnFunctionErrorHasBeenSet;

    int m_maximumRetryAttempts;
    bool m_maximumRetryAttemptsHasBeenSet;

    int m_tumblingWindowInSeconds;
    bool m_tumblingWindowInSecondsHasBeenSet;

    Aws::Vector<FunctionResponseType> m_functionResponseTypes;
    bool m_functionResponseTypesHasBeenSet;

    AmazonManagedKafkaEventSourceConfig m_amazonManagedKafkaEventSourceConfig;
    bool m_amazonManagedKafkaEventSourceConfigHasBeenSet;

    SelfManagedKafkaEventSourceConfig m_selfManagedKafkaEventSourceConfig;
    bool m_selfManagedKafkaEventSourceConfigHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws

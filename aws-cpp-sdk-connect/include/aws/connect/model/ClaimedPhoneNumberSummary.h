﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PhoneNumberCountryCode.h>
#include <aws/connect/model/PhoneNumberType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/PhoneNumberStatus.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about a phone number that has been claimed to your Amazon Connect
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ClaimedPhoneNumberSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API ClaimedPhoneNumberSummary
  {
  public:
    ClaimedPhoneNumberSummary();
    ClaimedPhoneNumberSummary(Aws::Utils::Json::JsonView jsonValue);
    ClaimedPhoneNumberSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = value; }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::move(value); }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId.assign(value); }

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the phone number.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberArn() const{ return m_phoneNumberArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline bool PhoneNumberArnHasBeenSet() const { return m_phoneNumberArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline void SetPhoneNumberArn(const Aws::String& value) { m_phoneNumberArnHasBeenSet = true; m_phoneNumberArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline void SetPhoneNumberArn(Aws::String&& value) { m_phoneNumberArnHasBeenSet = true; m_phoneNumberArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline void SetPhoneNumberArn(const char* value) { m_phoneNumberArnHasBeenSet = true; m_phoneNumberArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumberArn(const Aws::String& value) { SetPhoneNumberArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumberArn(Aws::String&& value) { SetPhoneNumberArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the phone number.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumberArn(const char* value) { SetPhoneNumberArn(value); return *this;}


    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number. Phone numbers are formatted <code>[+] [country code]
     * [subscriber number including area code]</code>.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>The ISO country code.</p>
     */
    inline const PhoneNumberCountryCode& GetPhoneNumberCountryCode() const{ return m_phoneNumberCountryCode; }

    /**
     * <p>The ISO country code.</p>
     */
    inline bool PhoneNumberCountryCodeHasBeenSet() const { return m_phoneNumberCountryCodeHasBeenSet; }

    /**
     * <p>The ISO country code.</p>
     */
    inline void SetPhoneNumberCountryCode(const PhoneNumberCountryCode& value) { m_phoneNumberCountryCodeHasBeenSet = true; m_phoneNumberCountryCode = value; }

    /**
     * <p>The ISO country code.</p>
     */
    inline void SetPhoneNumberCountryCode(PhoneNumberCountryCode&& value) { m_phoneNumberCountryCodeHasBeenSet = true; m_phoneNumberCountryCode = std::move(value); }

    /**
     * <p>The ISO country code.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumberCountryCode(const PhoneNumberCountryCode& value) { SetPhoneNumberCountryCode(value); return *this;}

    /**
     * <p>The ISO country code.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumberCountryCode(PhoneNumberCountryCode&& value) { SetPhoneNumberCountryCode(std::move(value)); return *this;}


    /**
     * <p>The type of phone number.</p>
     */
    inline const PhoneNumberType& GetPhoneNumberType() const{ return m_phoneNumberType; }

    /**
     * <p>The type of phone number.</p>
     */
    inline bool PhoneNumberTypeHasBeenSet() const { return m_phoneNumberTypeHasBeenSet; }

    /**
     * <p>The type of phone number.</p>
     */
    inline void SetPhoneNumberType(const PhoneNumberType& value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = value; }

    /**
     * <p>The type of phone number.</p>
     */
    inline void SetPhoneNumberType(PhoneNumberType&& value) { m_phoneNumberTypeHasBeenSet = true; m_phoneNumberType = std::move(value); }

    /**
     * <p>The type of phone number.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumberType(const PhoneNumberType& value) { SetPhoneNumberType(value); return *this;}

    /**
     * <p>The type of phone number.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumberType(PhoneNumberType&& value) { SetPhoneNumberType(std::move(value)); return *this;}


    /**
     * <p>The description of the phone number.</p>
     */
    inline const Aws::String& GetPhoneNumberDescription() const{ return m_phoneNumberDescription; }

    /**
     * <p>The description of the phone number.</p>
     */
    inline bool PhoneNumberDescriptionHasBeenSet() const { return m_phoneNumberDescriptionHasBeenSet; }

    /**
     * <p>The description of the phone number.</p>
     */
    inline void SetPhoneNumberDescription(const Aws::String& value) { m_phoneNumberDescriptionHasBeenSet = true; m_phoneNumberDescription = value; }

    /**
     * <p>The description of the phone number.</p>
     */
    inline void SetPhoneNumberDescription(Aws::String&& value) { m_phoneNumberDescriptionHasBeenSet = true; m_phoneNumberDescription = std::move(value); }

    /**
     * <p>The description of the phone number.</p>
     */
    inline void SetPhoneNumberDescription(const char* value) { m_phoneNumberDescriptionHasBeenSet = true; m_phoneNumberDescription.assign(value); }

    /**
     * <p>The description of the phone number.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumberDescription(const Aws::String& value) { SetPhoneNumberDescription(value); return *this;}

    /**
     * <p>The description of the phone number.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumberDescription(Aws::String&& value) { SetPhoneNumberDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the phone number.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumberDescription(const char* value) { SetPhoneNumberDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances that phone
     * numbers are claimed to.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances that phone
     * numbers are claimed to.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances that phone
     * numbers are claimed to.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances that phone
     * numbers are claimed to.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances that phone
     * numbers are claimed to.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances that phone
     * numbers are claimed to.</p>
     */
    inline ClaimedPhoneNumberSummary& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances that phone
     * numbers are claimed to.</p>
     */
    inline ClaimedPhoneNumberSummary& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for Amazon Connect instances that phone
     * numbers are claimed to.</p>
     */
    inline ClaimedPhoneNumberSummary& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline ClaimedPhoneNumberSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline ClaimedPhoneNumberSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline ClaimedPhoneNumberSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline ClaimedPhoneNumberSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline ClaimedPhoneNumberSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline ClaimedPhoneNumberSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline ClaimedPhoneNumberSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline ClaimedPhoneNumberSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline ClaimedPhoneNumberSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The status of the phone number.</p>
     */
    inline const PhoneNumberStatus& GetPhoneNumberStatus() const{ return m_phoneNumberStatus; }

    /**
     * <p>The status of the phone number.</p>
     */
    inline bool PhoneNumberStatusHasBeenSet() const { return m_phoneNumberStatusHasBeenSet; }

    /**
     * <p>The status of the phone number.</p>
     */
    inline void SetPhoneNumberStatus(const PhoneNumberStatus& value) { m_phoneNumberStatusHasBeenSet = true; m_phoneNumberStatus = value; }

    /**
     * <p>The status of the phone number.</p>
     */
    inline void SetPhoneNumberStatus(PhoneNumberStatus&& value) { m_phoneNumberStatusHasBeenSet = true; m_phoneNumberStatus = std::move(value); }

    /**
     * <p>The status of the phone number.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumberStatus(const PhoneNumberStatus& value) { SetPhoneNumberStatus(value); return *this;}

    /**
     * <p>The status of the phone number.</p>
     */
    inline ClaimedPhoneNumberSummary& WithPhoneNumberStatus(PhoneNumberStatus&& value) { SetPhoneNumberStatus(std::move(value)); return *this;}

  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet;

    Aws::String m_phoneNumberArn;
    bool m_phoneNumberArnHasBeenSet;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet;

    PhoneNumberCountryCode m_phoneNumberCountryCode;
    bool m_phoneNumberCountryCodeHasBeenSet;

    PhoneNumberType m_phoneNumberType;
    bool m_phoneNumberTypeHasBeenSet;

    Aws::String m_phoneNumberDescription;
    bool m_phoneNumberDescriptionHasBeenSet;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    PhoneNumberStatus m_phoneNumberStatus;
    bool m_phoneNumberStatusHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

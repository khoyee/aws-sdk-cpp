﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/ValidationExceptionReason.h>
#include <aws/privatenetworks/model/ValidationExceptionField.h>
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
namespace PrivateNetworks
{
namespace Model
{

  /**
   * <p>The request failed validation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/ValidationException">AWS
   * API Reference</a></p>
   */
  class AWS_PRIVATENETWORKS_API ValidationException
  {
  public:
    ValidationException();
    ValidationException(Aws::Utils::Json::JsonView jsonValue);
    ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of fields that caused the error, if applicable.</p>
     */
    inline const Aws::Vector<ValidationExceptionField>& GetFieldList() const{ return m_fieldList; }

    /**
     * <p>The list of fields that caused the error, if applicable.</p>
     */
    inline bool FieldListHasBeenSet() const { return m_fieldListHasBeenSet; }

    /**
     * <p>The list of fields that caused the error, if applicable.</p>
     */
    inline void SetFieldList(const Aws::Vector<ValidationExceptionField>& value) { m_fieldListHasBeenSet = true; m_fieldList = value; }

    /**
     * <p>The list of fields that caused the error, if applicable.</p>
     */
    inline void SetFieldList(Aws::Vector<ValidationExceptionField>&& value) { m_fieldListHasBeenSet = true; m_fieldList = std::move(value); }

    /**
     * <p>The list of fields that caused the error, if applicable.</p>
     */
    inline ValidationException& WithFieldList(const Aws::Vector<ValidationExceptionField>& value) { SetFieldList(value); return *this;}

    /**
     * <p>The list of fields that caused the error, if applicable.</p>
     */
    inline ValidationException& WithFieldList(Aws::Vector<ValidationExceptionField>&& value) { SetFieldList(std::move(value)); return *this;}

    /**
     * <p>The list of fields that caused the error, if applicable.</p>
     */
    inline ValidationException& AddFieldList(const ValidationExceptionField& value) { m_fieldListHasBeenSet = true; m_fieldList.push_back(value); return *this; }

    /**
     * <p>The list of fields that caused the error, if applicable.</p>
     */
    inline ValidationException& AddFieldList(ValidationExceptionField&& value) { m_fieldListHasBeenSet = true; m_fieldList.push_back(std::move(value)); return *this; }


    /**
     * <p>Description of the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Description of the error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Description of the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Description of the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Description of the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Description of the error.</p>
     */
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Description of the error.</p>
     */
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Description of the error.</p>
     */
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Reason the request failed validation.</p>
     */
    inline const ValidationExceptionReason& GetReason() const{ return m_reason; }

    /**
     * <p>Reason the request failed validation.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Reason the request failed validation.</p>
     */
    inline void SetReason(const ValidationExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Reason the request failed validation.</p>
     */
    inline void SetReason(ValidationExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Reason the request failed validation.</p>
     */
    inline ValidationException& WithReason(const ValidationExceptionReason& value) { SetReason(value); return *this;}

    /**
     * <p>Reason the request failed validation.</p>
     */
    inline ValidationException& WithReason(ValidationExceptionReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::Vector<ValidationExceptionField> m_fieldList;
    bool m_fieldListHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    ValidationExceptionReason m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws

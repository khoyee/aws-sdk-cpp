﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/ListUsersByPermissionGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListUsersByPermissionGroupResult::ListUsersByPermissionGroupResult()
{
}

ListUsersByPermissionGroupResult::ListUsersByPermissionGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListUsersByPermissionGroupResult& ListUsersByPermissionGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("users"))
  {
    Array<JsonView> usersJsonList = jsonValue.GetArray("users");
    for(unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex)
    {
      m_users.push_back(usersJsonList[usersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}

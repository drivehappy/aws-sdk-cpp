/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/iam/model/statusType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Active_HASH = HashingUtils::HashString("Active");
static const int Inactive_HASH = HashingUtils::HashString("Inactive");

namespace Aws
{
namespace IAM
{
namespace Model
{
namespace statusTypeMapper
{
statusType GetstatusTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Active_HASH)
  {
    return statusType::Active;
  }
  else if (hashCode == Inactive_HASH)
  {
    return statusType::Inactive;
  }

  return statusType::NOT_SET;
}

Aws::String GetNameForstatusType(statusType value)
{
  switch(value)
  {
  case statusType::Active:
    return "Active";
  case statusType::Inactive:
    return "Inactive";
  default:
    return "";
  }
}

} // namespace statusTypeMapper
} // namespace Model
} // namespace IAM
} // namespace Aws
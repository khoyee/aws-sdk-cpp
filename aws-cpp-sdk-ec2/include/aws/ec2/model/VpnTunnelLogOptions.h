﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/CloudWatchLogOptions.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Options for logging VPN tunnel activity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpnTunnelLogOptions">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API VpnTunnelLogOptions
  {
  public:
    VpnTunnelLogOptions();
    VpnTunnelLogOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpnTunnelLogOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Options for sending VPN tunnel logs to CloudWatch.</p>
     */
    inline const CloudWatchLogOptions& GetCloudWatchLogOptions() const{ return m_cloudWatchLogOptions; }

    /**
     * <p>Options for sending VPN tunnel logs to CloudWatch.</p>
     */
    inline bool CloudWatchLogOptionsHasBeenSet() const { return m_cloudWatchLogOptionsHasBeenSet; }

    /**
     * <p>Options for sending VPN tunnel logs to CloudWatch.</p>
     */
    inline void SetCloudWatchLogOptions(const CloudWatchLogOptions& value) { m_cloudWatchLogOptionsHasBeenSet = true; m_cloudWatchLogOptions = value; }

    /**
     * <p>Options for sending VPN tunnel logs to CloudWatch.</p>
     */
    inline void SetCloudWatchLogOptions(CloudWatchLogOptions&& value) { m_cloudWatchLogOptionsHasBeenSet = true; m_cloudWatchLogOptions = std::move(value); }

    /**
     * <p>Options for sending VPN tunnel logs to CloudWatch.</p>
     */
    inline VpnTunnelLogOptions& WithCloudWatchLogOptions(const CloudWatchLogOptions& value) { SetCloudWatchLogOptions(value); return *this;}

    /**
     * <p>Options for sending VPN tunnel logs to CloudWatch.</p>
     */
    inline VpnTunnelLogOptions& WithCloudWatchLogOptions(CloudWatchLogOptions&& value) { SetCloudWatchLogOptions(std::move(value)); return *this;}

  private:

    CloudWatchLogOptions m_cloudWatchLogOptions;
    bool m_cloudWatchLogOptionsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

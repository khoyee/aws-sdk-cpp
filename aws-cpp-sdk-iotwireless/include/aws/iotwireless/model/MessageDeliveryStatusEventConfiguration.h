﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SidewalkEventNotificationConfigurations.h>
#include <aws/iotwireless/model/EventNotificationTopicStatus.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Message delivery status event configuration object for enabling and disabling
   * relevant topics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/MessageDeliveryStatusEventConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API MessageDeliveryStatusEventConfiguration
  {
  public:
    MessageDeliveryStatusEventConfiguration();
    MessageDeliveryStatusEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    MessageDeliveryStatusEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const SidewalkEventNotificationConfigurations& GetSidewalk() const{ return m_sidewalk; }

    
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }

    
    inline void SetSidewalk(const SidewalkEventNotificationConfigurations& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }

    
    inline void SetSidewalk(SidewalkEventNotificationConfigurations&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }

    
    inline MessageDeliveryStatusEventConfiguration& WithSidewalk(const SidewalkEventNotificationConfigurations& value) { SetSidewalk(value); return *this;}

    
    inline MessageDeliveryStatusEventConfiguration& WithSidewalk(SidewalkEventNotificationConfigurations&& value) { SetSidewalk(std::move(value)); return *this;}


    /**
     * <p>Enum to denote whether the wireless device id device registration state event
     * topic is enabled or disabled.</p>
     */
    inline const EventNotificationTopicStatus& GetWirelessDeviceIdEventTopic() const{ return m_wirelessDeviceIdEventTopic; }

    /**
     * <p>Enum to denote whether the wireless device id device registration state event
     * topic is enabled or disabled.</p>
     */
    inline bool WirelessDeviceIdEventTopicHasBeenSet() const { return m_wirelessDeviceIdEventTopicHasBeenSet; }

    /**
     * <p>Enum to denote whether the wireless device id device registration state event
     * topic is enabled or disabled.</p>
     */
    inline void SetWirelessDeviceIdEventTopic(const EventNotificationTopicStatus& value) { m_wirelessDeviceIdEventTopicHasBeenSet = true; m_wirelessDeviceIdEventTopic = value; }

    /**
     * <p>Enum to denote whether the wireless device id device registration state event
     * topic is enabled or disabled.</p>
     */
    inline void SetWirelessDeviceIdEventTopic(EventNotificationTopicStatus&& value) { m_wirelessDeviceIdEventTopicHasBeenSet = true; m_wirelessDeviceIdEventTopic = std::move(value); }

    /**
     * <p>Enum to denote whether the wireless device id device registration state event
     * topic is enabled or disabled.</p>
     */
    inline MessageDeliveryStatusEventConfiguration& WithWirelessDeviceIdEventTopic(const EventNotificationTopicStatus& value) { SetWirelessDeviceIdEventTopic(value); return *this;}

    /**
     * <p>Enum to denote whether the wireless device id device registration state event
     * topic is enabled or disabled.</p>
     */
    inline MessageDeliveryStatusEventConfiguration& WithWirelessDeviceIdEventTopic(EventNotificationTopicStatus&& value) { SetWirelessDeviceIdEventTopic(std::move(value)); return *this;}

  private:

    SidewalkEventNotificationConfigurations m_sidewalk;
    bool m_sidewalkHasBeenSet;

    EventNotificationTopicStatus m_wirelessDeviceIdEventTopic;
    bool m_wirelessDeviceIdEventTopicHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws

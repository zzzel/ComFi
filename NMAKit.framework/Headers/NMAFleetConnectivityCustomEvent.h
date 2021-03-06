/*
 * Copyright © 2011-2016 HERE Global B.V. and its affiliate(s).
 * All rights reserved.
 * The use of this software is conditional upon having a separate agreement
 * with a HERE company for the use or utilization of this software. In the
 * absence of such agreement, the use of the software is not allowed.
 */

#import "NMAFleetConnectivityEvent.h"

/**
 * \addtogroup NMA_FCE NMA Fleet Connectivity Extensions Group
 * @{
 */


/**
 * Represents event used for relaying custom data to the operator.
 */
@interface NMAFleetConnectivityCustomEvent : NMAFleetConnectivityEvent

/**
 * Job ID to which this event relates.
 * Specifying this property is optional.
 */
@property (nonatomic, readwrite) NSString *jobId;

@end

/**  @}  */

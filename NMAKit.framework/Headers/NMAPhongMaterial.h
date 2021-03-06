/*
 * Copyright © 2011-2016 HERE Global B.V. and its affiliate(s).
 * All rights reserved.
 * The use of this software is conditional upon having a separate agreement
 * with a HERE company for the use or utilization of this software. In the
 * absence of such agreement, the use of the software is not allowed.
 */

#import "NMAMaterial.h"

@class NMAImage;
@class UIColor;


/**
 * \addtogroup NMA_Map  NMA Mapping Group
 * @{
 */

/**
 * \class NMAPhongMaterial NMAPhongMaterial.h "NMAPhongMaterial.h"
 *
 * A simple colored material for 3D map objects that can be used in conjunction
 * with a model texture to change the color of the texture.
 */
@interface NMAPhongMaterial : NMAMaterial

/**
 * Creates an NMAPhongMaterial with the specified diffuse and ambient colors.
 */
+ (NMAPhongMaterial *)materialWithDiffuseColor:(UIColor *)diffuseColor ambientColor:(UIColor *)ambientColor;

/**
 * The diffuse color of the material.
 *
 * \note The default value (in RGBA) is 0xFFFFFFFF.
 */
@property (nonatomic, strong) UIColor *diffuseColor;

/**
 * The ambient color of the material
 *
 * \note The default value (in RGBA) is 0x000000FF.
 */
@property (nonatomic, strong) UIColor *ambientColor;

@end

/** @} */

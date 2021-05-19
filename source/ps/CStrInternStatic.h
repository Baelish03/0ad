/* Copyright (C) 2021 Wildfire Games.
 * This file is part of 0 A.D.
 *
 * 0 A.D. is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * 0 A.D. is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with 0 A.D.  If not, see <http://www.gnu.org/licenses/>.
 */

// This file defines global CStrIntern variables, to avoid the cost of
// constructing CStrInterns frequently at runtime.
//
// A line like
//   X(foo)
// defines a variable str_foo with value "foo".
//
// A line like
//   X2(foo_0, "foo[0]")
// defines a variable str_foo_0 with value "foo[0]".

// For direct inclusion, we presumably just want the extern definitions.
#ifndef X
#include "CStrIntern.h"
#define X(id) extern CStrIntern str_##id;
#define X2(id, str) extern CStrIntern str_##id;
#endif

X(0)
X(1)
X(2)
X(ALPHABLEND_PASS_BLEND)
X(ALPHABLEND_PASS_OPAQUE)
X(BLEND)
X(BLOOM_NOP)
X(BLOOM_PASS_H)
X(BLOOM_PASS_V)
X(DECAL)
X(DISABLE_RECEIVE_SHADOWS)
X(IGNORE_LOS)
X(MINIMAP_BASE)
X(MINIMAP_LINE)
X(MINIMAP_LOS)
X(MINIMAP_MASK)
X(MINIMAP_POINT)
X(MODE_SHADOWCAST)
X(MODE_SILHOUETTEDISPLAY)
X(MODE_SILHOUETTEOCCLUDER)
X(MODE_WIREFRAME)
X(SYS_HAS_ARB)
X(SYS_HAS_GLSL)
X(SYS_PREFER_GLSL)
X(USE_FANCY_EFFECTS)
X(USE_FP_SHADOW)
X(USE_GPU_SKINNING)
X(USE_INSTANCING)
X(USE_NORMALS)
X(USE_OBJECTCOLOR)
X(USE_REAL_DEPTH)
X(USE_REFLECTION)
X(USE_REFRACTION)
X(USE_SHADOW)
X(USE_SHADOW_PCF)
X(USE_SHADOW_SAMPLER)
X(USE_FOG)
X(WATERTYPE_CLAP)
X(WATERTYPE_LAKE)
X2(_emptystring, "")
X(a_apexPosition)
X(a_otherPosition)
X(a_retreatPosition)
X(a_skinJoints)
X(a_skinWeights)
X(a_splashPosition)
X(a_tangent)
X(a_waterInfo)
X(ambient)
X(baseTex)
X(blendTex)
X(bloom)
X(blurTex2)
X(blurTex4)
X(blurTex8)
X(brightness)
X(cameraPos)
X(color)
X(colorAdd)
X(colorMul)
X(debug_line)
X(debug_overlay)
X(delta)
X(depthTex)
X(foamTex)
X(fogColor)
X(fogParams)
X(foreground_overlay)
X(gui_add)
X(gui_basic)
X(gui_grayscale)
X(gui_solid)
X(gui_solid_mask)
X(gui_text)
X(hdr)
X(height)
X(instancingTransform)
X(losTex)
X(losTex1)
X(losTex2)
X(losTransform)
X(los_interp)
X(mapSize)
X(maskTex)
X(maskTextureTransform)
X(minimap)
X(modelViewMatrix)
X(murkiness)
X(normalMap)
X(normalMap2)
X(objectColor)
X(overlay_solid)
X(particle)
X(particle_solid)
X(playerColor)
X(pointSize)
X(projInvTransform)
X(qualityLevel)
X(reflectionMap)
X(reflectionMatrix)
X(refractionMap)
X(refractionMatrix)
X(renderedTex)
X(repeatScale)
X2(sans_10, "sans-10");
X(saturation)
X(screenSize)
X(shadingColor)
X(shadowScale)
X(shadowTex)
X(shadowTransform)
X(sharpness)
X(skinBlendMatrices)
X2(skinBlendMatrices_0, "skinBlendMatrices[0]")
X(skyBoxRot)
X(skyCube)
X(sky_simple)
X(sunColor)
X(sunDir)
X(tex)
X(texSize)
X(textureTransform)
X(time)
X(tint)
X(transform)
X(translation)
X(viewInvTransform)
X(water_simple)
X(waterEffectsTex)
X(waterTex)
X(waveTex)
X(waviness)
X(waveParams1)
X(waveParams2)
X(width)
X(windAngle)
X(zFar)
X(zNear)

#undef X
#undef X2

// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osgART/VideoLayer>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgART::VideoLayer)
	I_BaseType(osgART::GenericVideoObject);
	I_ConstructorWithDefaults2(IN, int, videoId, 0, IN, int, layerDepth, 0);
	I_Method0(void, init);
	I_Method1(void, setTransparency, IN, float, alpha);
	I_Method0(float, getTransparency);
	I_Method1(void, setLayerDepth, IN, int, _depth);
	I_Method0(int, getLayerDepth);
	I_Method0(float, getWidth);
	I_Method0(float, getHeight);
	I_Method1(void, setUndistortionTrackerID, IN, int, trackerID);
	I_ReadOnlyProperty(float, Height);
	I_Property(int, LayerDepth);
	I_Property(float, Transparency);
	I_WriteOnlyProperty(int, UndistortionTrackerID);
	I_ReadOnlyProperty(float, Width);
END_REFLECTOR

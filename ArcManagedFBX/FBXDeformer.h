#pragma once

#include "FBXObject.h"

using namespace ArcManagedFBX::Types;

namespace ArcManagedFBX
{
	// The managed representation of the deformer class.
	public ref class FBXDeformer : public FBXObject
	{
	public:
		ARC_FBXSDK_OBJECT_IMPLEMENT(FBXDeformer,FBXObject,FbxDeformer)
		ARC_DEFAULT_CONSTRUCTORS(FBXDeformer)

		virtual DeformerType GetDeformerType();
	private:

	internal:
		ARC_DEFAULT_INTERNAL_CONSTRUCTOR(FBXDeformer,FbxDeformer)
		ARC_CHILD_CAST(NativeObject,FbxDeformer,FBXDeformer)
	};
}
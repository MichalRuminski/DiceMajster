#include "pch.h"
#include "IndexTag.h"

namespace Kosci{
	IndexTag::IndexTag(int v) {
		index = v;
	}
	int IndexTag::getIndex()
	{
		return index;
	}
}
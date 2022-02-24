#include "pch.h"
#include "IndexTag.h"

namespace Kosci{
	IndexTag::IndexTag(int v) {
		this->index = v;
		this->isSelected = false;
	}
	int IndexTag::getIndex()
	{
		return index;
	}
	void IndexTag::setIsSelected(bool selected)
	{
		this->isSelected = selected;
	}
	bool IndexTag::getIsSelected()
	{
		return this->isSelected;
	}
}
#pragma once

namespace Kosci {
	public ref class IndexTag : System::Object {
	public:
		IndexTag(int v);
		int getIndex();
		void setIsSelected(bool selected);
		bool getIsSelected();
	private:
		int index;
		bool isSelected;
	};
}

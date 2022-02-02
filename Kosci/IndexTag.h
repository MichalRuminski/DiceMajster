#pragma once

namespace Kosci {
	public ref class IndexTag : System::Object {
	public:
		IndexTag(int v);
		int getIndex();
	private:
		int index;
	};
}

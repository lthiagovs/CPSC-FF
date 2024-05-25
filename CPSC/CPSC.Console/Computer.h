#pragma once
#include <string>

namespace Models {

	class Computer {

	public:

		int Label;
		int IP;

		Computer(int Label, int IP) {
			this->Label = Label;
			this->IP = IP;
		}

	private:


	};


}
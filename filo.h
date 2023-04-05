#ifndef _filo_h_
#define _filo_h_

#include <iostream>

template<class T>
class IData {
	protected :
		T* ar;
		int size1;
		int datalen;
	public :

		bool addToEnd(T el) { 
			std::cout << __func__ << " : base class" << std::endl;
			return false; 
		}
		bool getFromEnd(T& el) { 
			std::cout << __func__ << " : base class" << std::endl;
			return false; 
		}
		IData() {
			datalen = 0;
			size1 = 16;
			ar = new T [16];
		}
		~IData() {
			delete [] ar;
		}
};

template<class T>
class Filo : public IData<T> {
	public :
		Filo() : IData<T>() {}

		bool addToEnd(T el) {
			std::cout << __func__ << " : inheritance class" << std::endl;

			if (IData<T>::datalen == IData<T>::size1) {
				return false;
			}
			IData<T>::ar[IData<T>::datalen++] = el;
			return true;
		}

		bool getFromEnd(T& el) {
			std::cout << __func__ << " : inheritance class" << std::endl;
			if (IData<T>::datalen == 0) {
				return false;
			}
			el = IData<T>::ar[--IData<T>::datalen];
			return true;
		}

};

#endif

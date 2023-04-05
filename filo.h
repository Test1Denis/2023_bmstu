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

		bool addToEnd(T el) { return false; }
		bool getFromEnd(T& el) { return false; }
		IData() {
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
			if (IData<T>::datalen == IData<T>::size1) {
				return false;
			}
			IData<T>::ar[IData<T>::datalen++] = el;
			return true;
		}

		bool getFromEnd(T& el) {
			if (IData<T>::datalen == 0) {
				return false;
			}
			el = IData<T>::ar[--IData<T>::datalen];
			return true;
		}

};

#endif

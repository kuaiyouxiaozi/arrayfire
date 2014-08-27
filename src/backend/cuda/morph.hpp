#include <Array.hpp>

namespace cuda
{

    template<typename T, bool isDilation>
    Array<T> * morph(const Array<T> &in, const Array<T> &mask);

    template<typename T, bool isDilation>
    Array<T> * morph3d(const Array<T> &in, const Array<T> &mask);

}

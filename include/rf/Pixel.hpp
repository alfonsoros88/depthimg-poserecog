#ifndef RF_PIXEL_HH
#define RF_PIXEL_HH

#include <cstdint>

namespace rf {

template <class Image>
class Pixel {
  uint32_t _x;
  uint32_t _y;
  Image const& _img;

 public:
  using value_type = typename Image::value_type;

  value_type const& value() const noexcept { return _img(_x, _y); }

  Pixel(uint32_t x, uint32_t y, Image const& img) noexcept : _x{x},
                                                             _y{y},
                                                             _img{img} {}
};

} /* rf  */

#endif /* end of include guard: RF_PIXEL_HH */
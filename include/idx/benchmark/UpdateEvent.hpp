#ifndef __IDX__BENCHMARK__UPDATE_EVENT__HPP__
#define __IDX__BENCHMARK__UPDATE_EVENT__HPP__

#include <idx/contenthelpers/OptionalValue.hpp>
#include <idx/contenthelpers/ValueToKeyTypeMapper.hpp>

namespace idx {
namespace benchmark {

template <typename ValueType, template <typename> typename KeyExtractor>
struct UpdateEvent {
  ValueType mNewValue;
  idx::contenthelpers::OptionalValue<ValueType> mPreviousValue;

  UpdateEvent() {}
};

} // namespace benchmark
} // namespace idx

#endif
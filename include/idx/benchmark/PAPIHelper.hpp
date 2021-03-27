#ifndef __IDX__BENCHMARK__PAPI_HELPER__
#define __IDX__BENCHMARK__PAPI_HELPER__

#include <iostream>
#include <papi.h>

namespace idx {
namespace benchmark {

template <typename PapiOperation>
inline void executePapiOperation(std::string const &operationDescription,
                                 PapiOperation papiOperation) {
  int papiOperationReturnValue = papiOperation();
  if (papiOperationReturnValue != PAPI_OK) {
    std::cerr << "PAPI failed to " << operationDescription << ":"
              << PAPI_strerror(papiOperationReturnValue) << std::endl;
    exit(1);
  }
}

} // namespace benchmark
} // namespace idx

#endif
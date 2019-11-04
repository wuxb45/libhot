#include <hot/singlethreaded/HOTSingleThreaded.hpp>
#include <hot/rowex/HOTRowex.hpp>
#include <idx/contenthelpers/IdentityKeyExtractor.hpp>
#include <idx/contenthelpers/OptionalValue.hpp>

using HOT = hot::singlethreaded::HOTSingleThreaded<char *, idx::contenthelpers::IdentityKeyExtractor>;

  int
main(int argc, char ** argv)
{
  HOT hot;
  return 0;
}

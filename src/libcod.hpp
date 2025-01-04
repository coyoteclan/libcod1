#include <map>          // make_tuple, get, array
#include <sstream>      // ostringstream
#include <vector>
#include <array>
#include <cmath>        // fabs, sqrt

#include <signal.h>
#include <arpa/inet.h>  // sockaddr_in, inet_pton
#include <execinfo.h>   // backtrace
#include <dlfcn.h>      // dlsym
#include <sys/time.h>   // gettimeofday

#include "shared.hpp"

// Some declarations to be able to call before defined
static void ban();
static void unban();
std::tuple<bool, int, int, std::string> banInfoForIp(char* ip);
void UCMD_custom_sprint(client_t *cl);
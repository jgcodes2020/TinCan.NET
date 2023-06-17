//
// Created by jgcodes on 11/06/23.
//

#ifndef TC_GLOBAL_HPP_INCLUDED
#define TC_GLOBAL_HPP_INCLUDED

#include <mupen64plus/m64p_types.h>
#include <boost/process.hpp>
#include <optional>

namespace tc {
  extern m64p_dynlib_handle core_handle;
  extern void* log_context;
  extern void (*log_callback)(void* context, int level, const char* str);
  extern std::optional<boost::process::child> process;
}


#endif  // TC_GLOBAL_HPP_INCLUDED
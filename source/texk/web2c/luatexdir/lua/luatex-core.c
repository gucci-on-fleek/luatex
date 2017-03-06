/* generated from and by luatex-core.lua */

#include "lua.h"
#include "lauxlib.h"

int load_luatex_core_lua (lua_State * L);

int load_luatex_core_lua (lua_State * L)
{
  static unsigned char luatex_core_lua[] = {
    0x2d, 0x2d, 0x20, 0x69, 0x66, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x6d, 0x6f, 0x64, 0x75, 0x6c, 0x65,
    0x73, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x20, 0x6d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x73, 0x20, 0x3d,
    0x20, 0x7b, 0x20, 0x7d, 0x20, 0x65, 0x6e, 0x64, 0x20, 0x6d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x73,
    0x20, 0x5b, 0x27, 0x6c, 0x75, 0x61, 0x74, 0x65, 0x78, 0x2d, 0x63, 0x6f, 0x72, 0x65, 0x27, 0x5d,
    0x20, 0x3d, 0x20, 0x7b, 0x0a, 0x2d, 0x2d, 0x20, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x72, 0x73,
    0x69, 0x6f, 0x6e, 0x20, 0x20, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x30, 0x31, 0x2c, 0x0a, 0x2d,
    0x2d, 0x20, 0x20, 0x20, 0x20, 0x20, 0x63, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x20, 0x20,
    0x3d, 0x20, 0x27, 0x63, 0x6f, 0x6d, 0x70, 0x61, 0x6e, 0x69, 0x6f, 0x6e, 0x20, 0x74, 0x6f, 0x20,
    0x6c, 0x75, 0x61, 0x74, 0x65, 0x78, 0x27, 0x2c, 0x0a, 0x2d, 0x2d, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x61, 0x75, 0x74, 0x68, 0x6f, 0x72, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x20, 0x27, 0x48, 0x61, 0x6e,
    0x73, 0x20, 0x48, 0x61, 0x67, 0x65, 0x6e, 0x20, 0x26, 0x20, 0x4c, 0x75, 0x69, 0x67, 0x69, 0x20,
    0x53, 0x63, 0x61, 0x72, 0x73, 0x6f, 0x27, 0x2c, 0x0a, 0x2d, 0x2d, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x63, 0x6f, 0x70, 0x79, 0x72, 0x69, 0x67, 0x68, 0x74, 0x20, 0x3d, 0x20, 0x27, 0x4c, 0x75, 0x61,
    0x54, 0x65, 0x58, 0x20, 0x44, 0x65, 0x76, 0x65, 0x6c, 0x6f, 0x70, 0x6d, 0x65, 0x6e, 0x74, 0x20,
    0x54, 0x65, 0x61, 0x6d, 0x27, 0x2c, 0x0a, 0x2d, 0x2d, 0x20, 0x7d, 0x0a, 0x0a, 0x4c, 0x55, 0x41,
    0x54, 0x45, 0x58, 0x43, 0x4f, 0x52, 0x45, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4f, 0x4e, 0x20, 0x3d,
    0x20, 0x31, 0x2e, 0x30, 0x30, 0x31, 0x0a, 0x0a, 0x2d, 0x2d, 0x20, 0x54, 0x68, 0x69, 0x73, 0x20,
    0x66, 0x69, 0x6c, 0x65, 0x20, 0x6f, 0x76, 0x65, 0x72, 0x6c, 0x6f, 0x61, 0x64, 0x73, 0x20, 0x73,
    0x6f, 0x6d, 0x65, 0x20, 0x4c, 0x75, 0x61, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e,
    0x73, 0x2e, 0x20, 0x54, 0x68, 0x65, 0x20, 0x72, 0x65, 0x61, 0x64, 0x6c, 0x69, 0x6e, 0x65, 0x20,
    0x76, 0x61, 0x72, 0x69, 0x61, 0x6e, 0x74, 0x73, 0x20, 0x70, 0x72, 0x6f, 0x76, 0x69, 0x64, 0x65,
    0x20, 0x74, 0x68, 0x65, 0x20, 0x73, 0x61, 0x6d, 0x65, 0x0a, 0x2d, 0x2d, 0x20, 0x66, 0x75, 0x6e,
    0x63, 0x74, 0x69, 0x6f, 0x6e, 0x61, 0x6c, 0x69, 0x74, 0x79, 0x20, 0x61, 0x73, 0x20, 0x4c, 0x75,
    0x61, 0x54, 0x65, 0x58, 0x20, 0x3c, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x34, 0x20, 0x61, 0x6e, 0x64,
    0x20, 0x64, 0x6f, 0x69, 0x6e, 0x67, 0x20, 0x69, 0x74, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x77,
    0x61, 0x79, 0x20, 0x70, 0x65, 0x72, 0x6d, 0x69, 0x74, 0x73, 0x20, 0x75, 0x73, 0x20, 0x74, 0x6f,
    0x20, 0x6b, 0x65, 0x65, 0x70, 0x20, 0x74, 0x68, 0x65, 0x0a, 0x2d, 0x2d, 0x20, 0x6f, 0x72, 0x69,
    0x67, 0x69, 0x6e, 0x61, 0x6c, 0x20, 0x69, 0x6f, 0x20, 0x6c, 0x69, 0x62, 0x72, 0x61, 0x72, 0x69,
    0x65, 0x73, 0x20, 0x63, 0x6c, 0x65, 0x61, 0x6e, 0x2e, 0x20, 0x50, 0x65, 0x72, 0x66, 0x6f, 0x72,
    0x6d, 0x61, 0x6e, 0x63, 0x65, 0x20, 0x69, 0x73, 0x20, 0x70, 0x72, 0x6f, 0x62, 0x61, 0x62, 0x6c,
    0x79, 0x20, 0x65, 0x76, 0x65, 0x6e, 0x20, 0x61, 0x20, 0x62, 0x69, 0x74, 0x20, 0x62, 0x65, 0x74,
    0x74, 0x65, 0x72, 0x20, 0x6e, 0x6f, 0x77, 0x2e, 0x0a, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20,
    0x74, 0x79, 0x70, 0x65, 0x2c, 0x20, 0x6e, 0x65, 0x78, 0x74, 0x2c, 0x20, 0x67, 0x65, 0x74, 0x6d,
    0x65, 0x74, 0x61, 0x74, 0x61, 0x62, 0x6c, 0x65, 0x2c, 0x20, 0x72, 0x65, 0x71, 0x75, 0x69, 0x72,
    0x65, 0x20, 0x3d, 0x20, 0x74, 0x79, 0x70, 0x65, 0x2c, 0x20, 0x6e, 0x65, 0x78, 0x74, 0x2c, 0x20,
    0x67, 0x65, 0x74, 0x6d, 0x65, 0x74, 0x61, 0x74, 0x61, 0x62, 0x6c, 0x65, 0x2c, 0x20, 0x72, 0x65,
    0x71, 0x75, 0x69, 0x72, 0x65, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x66, 0x69, 0x6e, 0x64,
    0x2c, 0x20, 0x67, 0x73, 0x75, 0x62, 0x20, 0x3d, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e,
    0x66, 0x69, 0x6e, 0x64, 0x2c, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x67, 0x73, 0x75,
    0x62, 0x0a, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x69, 0x6f, 0x5f, 0x6f, 0x70, 0x65, 0x6e,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x20, 0x69,
    0x6f, 0x2e, 0x6f, 0x70, 0x65, 0x6e, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x69, 0x6f, 0x5f,
    0x70, 0x6f, 0x70, 0x65, 0x6e, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x3d, 0x20, 0x69, 0x6f, 0x2e, 0x70, 0x6f, 0x70, 0x65, 0x6e, 0x0a, 0x6c, 0x6f, 0x63, 0x61,
    0x6c, 0x20, 0x69, 0x6f, 0x5f, 0x6c, 0x69, 0x6e, 0x65, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x20, 0x69, 0x6f, 0x2e, 0x6c, 0x69, 0x6e, 0x65, 0x73,
    0x0a, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x66, 0x69, 0x6f, 0x5f, 0x72, 0x65, 0x61, 0x64,
    0x6c, 0x69, 0x6e, 0x65, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x20, 0x66, 0x69,
    0x6f, 0x2e, 0x72, 0x65, 0x61, 0x64, 0x6c, 0x69, 0x6e, 0x65, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c,
    0x20, 0x66, 0x69, 0x6f, 0x5f, 0x63, 0x68, 0x65, 0x63, 0x6b, 0x70, 0x65, 0x72, 0x6d, 0x69, 0x73,
    0x73, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x66, 0x69, 0x6f, 0x2e, 0x63, 0x68, 0x65, 0x63, 0x6b,
    0x70, 0x65, 0x72, 0x6d, 0x69, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c,
    0x20, 0x66, 0x69, 0x6f, 0x5f, 0x72, 0x65, 0x63, 0x6f, 0x72, 0x64, 0x66, 0x69, 0x6c, 0x65, 0x6e,
    0x61, 0x6d, 0x65, 0x20, 0x20, 0x3d, 0x20, 0x66, 0x69, 0x6f, 0x2e, 0x72, 0x65, 0x63, 0x6f, 0x72,
    0x64, 0x66, 0x69, 0x6c, 0x65, 0x6e, 0x61, 0x6d, 0x65, 0x0a, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c,
    0x20, 0x6d, 0x74, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x20, 0x67, 0x65, 0x74, 0x6d, 0x65, 0x74, 0x61, 0x74, 0x61,
    0x62, 0x6c, 0x65, 0x28, 0x69, 0x6f, 0x2e, 0x73, 0x74, 0x64, 0x65, 0x72, 0x72, 0x29, 0x0a, 0x6c,
    0x6f, 0x63, 0x61, 0x6c, 0x20, 0x6d, 0x74, 0x5f, 0x6c, 0x69, 0x6e, 0x65, 0x73, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x20, 0x6d, 0x74, 0x2e, 0x6c, 0x69,
    0x6e, 0x65, 0x73, 0x0a, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x73, 0x61, 0x66, 0x65, 0x72,
    0x6f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d,
    0x20, 0x73, 0x74, 0x61, 0x74, 0x75, 0x73, 0x2e, 0x73, 0x61, 0x66, 0x65, 0x72, 0x5f, 0x6f, 0x70,
    0x74, 0x69, 0x6f, 0x6e, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x73, 0x68, 0x65, 0x6c, 0x6c,
    0x65, 0x73, 0x63, 0x61, 0x70, 0x65, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d,
    0x20, 0x73, 0x74, 0x61, 0x74, 0x75, 0x73, 0x2e, 0x73, 0x68, 0x65, 0x6c, 0x6c, 0x5f, 0x65, 0x73,
    0x63, 0x61, 0x70, 0x65, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x2d, 0x20, 0x30, 0x20, 0x28, 0x64,
    0x69, 0x73, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x29, 0x20, 0x31, 0x20, 0x28, 0x72, 0x65, 0x73, 0x74,
    0x72, 0x69, 0x63, 0x74, 0x65, 0x64, 0x29, 0x20, 0x32, 0x20, 0x28, 0x65, 0x76, 0x65, 0x72, 0x79,
    0x74, 0x68, 0x69, 0x6e, 0x67, 0x29, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x6b, 0x70, 0x73,
    0x65, 0x75, 0x73, 0x65, 0x64, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x3d, 0x20, 0x73, 0x74, 0x61, 0x74, 0x75, 0x73, 0x2e, 0x6b, 0x70, 0x73, 0x65, 0x5f, 0x75,
    0x73, 0x65, 0x64, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x2d, 0x20, 0x30, 0x20,
    0x31, 0x0a, 0x0a, 0x69, 0x6f, 0x2e, 0x73, 0x61, 0x76, 0x65, 0x64, 0x5f, 0x6f, 0x70, 0x65, 0x6e,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x20, 0x69,
    0x6f, 0x5f, 0x6f, 0x70, 0x65, 0x6e, 0x20, 0x20, 0x2d, 0x2d, 0x20, 0x63, 0x61, 0x6e, 0x20, 0x62,
    0x65, 0x20, 0x70, 0x72, 0x6f, 0x74, 0x65, 0x63, 0x74, 0x65, 0x64, 0x0a, 0x69, 0x6f, 0x2e, 0x73,
    0x61, 0x76, 0x65, 0x64, 0x5f, 0x70, 0x6f, 0x70, 0x65, 0x6e, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x20, 0x69, 0x6f, 0x5f, 0x70, 0x6f, 0x70, 0x65, 0x6e,
    0x20, 0x2d, 0x2d, 0x20, 0x63, 0x61, 0x6e, 0x20, 0x62, 0x65, 0x20, 0x70, 0x72, 0x6f, 0x74, 0x65,
    0x63, 0x74, 0x65, 0x64, 0x0a, 0x69, 0x6f, 0x2e, 0x73, 0x61, 0x76, 0x65, 0x64, 0x5f, 0x6c, 0x69,
    0x6e, 0x65, 0x73, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d,
    0x20, 0x69, 0x6f, 0x5f, 0x6c, 0x69, 0x6e, 0x65, 0x73, 0x20, 0x2d, 0x2d, 0x20, 0x61, 0x6c, 0x77,
    0x61, 0x79, 0x73, 0x20, 0x72, 0x65, 0x61, 0x64, 0x6f, 0x6e, 0x6c, 0x79, 0x0a, 0x6d, 0x74, 0x2e,
    0x73, 0x61, 0x76, 0x65, 0x64, 0x5f, 0x6c, 0x69, 0x6e, 0x65, 0x73, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x20, 0x6d, 0x74, 0x5f, 0x6c, 0x69, 0x6e, 0x65,
    0x73, 0x20, 0x2d, 0x2d, 0x20, 0x61, 0x6c, 0x77, 0x61, 0x79, 0x73, 0x20, 0x72, 0x65, 0x61, 0x64,
    0x6f, 0x6e, 0x6c, 0x79, 0x0a, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x66, 0x75, 0x6e, 0x63,
    0x74, 0x69, 0x6f, 0x6e, 0x20, 0x6c, 0x75, 0x61, 0x74, 0x65, 0x78, 0x5f, 0x69, 0x6f, 0x5f, 0x6f,
    0x70, 0x65, 0x6e, 0x28, 0x6e, 0x61, 0x6d, 0x65, 0x2c, 0x68, 0x6f, 0x77, 0x29, 0x0a, 0x20, 0x20,
    0x20, 0x20, 0x69, 0x66, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x68, 0x6f, 0x77, 0x20, 0x74, 0x68, 0x65,
    0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x68, 0x6f, 0x77, 0x20, 0x3d, 0x20,
    0x27, 0x72, 0x27, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20,
    0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x66, 0x20, 0x3d, 0x20, 0x69, 0x6f, 0x5f, 0x6f, 0x70, 0x65,
    0x6e, 0x28, 0x6e, 0x61, 0x6d, 0x65, 0x2c, 0x68, 0x6f, 0x77, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20,
    0x69, 0x66, 0x20, 0x66, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x69, 0x66, 0x20, 0x74, 0x79, 0x70, 0x65, 0x28, 0x68, 0x6f, 0x77, 0x29, 0x20, 0x3d,
    0x3d, 0x20, 0x27, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x27, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x66,
    0x69, 0x6e, 0x64, 0x28, 0x68, 0x6f, 0x77, 0x2c, 0x27, 0x77, 0x27, 0x29, 0x20, 0x74, 0x68, 0x65,
    0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x69,
    0x6f, 0x5f, 0x72, 0x65, 0x63, 0x6f, 0x72, 0x64, 0x66, 0x69, 0x6c, 0x65, 0x6e, 0x61, 0x6d, 0x65,
    0x28, 0x6e, 0x61, 0x6d, 0x65, 0x2c, 0x27, 0x77, 0x27, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x66, 0x69, 0x6f, 0x5f, 0x72, 0x65, 0x63, 0x6f, 0x72, 0x64, 0x66, 0x69,
    0x6c, 0x65, 0x6e, 0x61, 0x6d, 0x65, 0x28, 0x6e, 0x61, 0x6d, 0x65, 0x2c, 0x27, 0x72, 0x27, 0x29,
    0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20,
    0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20,
    0x66, 0x0a, 0x65, 0x6e, 0x64, 0x0a, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x66, 0x75, 0x6e,
    0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x6c, 0x75, 0x61, 0x74, 0x65, 0x78, 0x5f, 0x69, 0x6f, 0x5f,
    0x6f, 0x70, 0x65, 0x6e, 0x5f, 0x72, 0x65, 0x61, 0x64, 0x6f, 0x6e, 0x6c, 0x79, 0x28, 0x6e, 0x61,
    0x6d, 0x65, 0x2c, 0x68, 0x6f, 0x77, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x68,
    0x6f, 0x77, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x68, 0x6f, 0x77, 0x20, 0x3d, 0x20, 0x27, 0x72, 0x27, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6c,
    0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x68, 0x6f, 0x77, 0x20, 0x3d,
    0x20, 0x67, 0x73, 0x75, 0x62, 0x28, 0x68, 0x6f, 0x77, 0x2c, 0x27, 0x5b, 0x5e, 0x72, 0x62, 0x5d,
    0x27, 0x2c, 0x27, 0x27, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66,
    0x20, 0x68, 0x6f, 0x77, 0x20, 0x3d, 0x3d, 0x20, 0x27, 0x27, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0a,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x68, 0x6f, 0x77, 0x20,
    0x3d, 0x20, 0x27, 0x72, 0x27, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e,
    0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f,
    0x63, 0x61, 0x6c, 0x20, 0x66, 0x20, 0x3d, 0x20, 0x69, 0x6f, 0x5f, 0x6f, 0x70, 0x65, 0x6e, 0x28,
    0x6e, 0x61, 0x6d, 0x65, 0x2c, 0x68, 0x6f, 0x77, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66,
    0x20, 0x66, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x66, 0x69, 0x6f, 0x5f, 0x72, 0x65, 0x63, 0x6f, 0x72, 0x64, 0x66, 0x69, 0x6c, 0x65, 0x6e, 0x61,
    0x6d, 0x65, 0x28, 0x6e, 0x61, 0x6d, 0x65, 0x2c, 0x27, 0x72, 0x27, 0x29, 0x0a, 0x20, 0x20, 0x20,
    0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20,
    0x66, 0x0a, 0x65, 0x6e, 0x64, 0x0a, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x66, 0x75, 0x6e,
    0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x6c, 0x75, 0x61, 0x74, 0x65, 0x78, 0x5f, 0x69, 0x6f, 0x5f,
    0x70, 0x6f, 0x70, 0x65, 0x6e, 0x28, 0x6e, 0x61, 0x6d, 0x65, 0x2c, 0x2e, 0x2e, 0x2e, 0x29, 0x0a,
    0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x6f, 0x6b, 0x61, 0x79, 0x2c, 0x20,
    0x66, 0x6f, 0x75, 0x6e, 0x64, 0x20, 0x3d, 0x20, 0x66, 0x69, 0x6f, 0x5f, 0x63, 0x68, 0x65, 0x63,
    0x6b, 0x70, 0x65, 0x72, 0x6d, 0x69, 0x73, 0x73, 0x69, 0x6f, 0x6e, 0x28, 0x6e, 0x61, 0x6d, 0x65,
    0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x6f, 0x6b, 0x61, 0x79, 0x20, 0x61, 0x6e,
    0x64, 0x20, 0x66, 0x6f, 0x75, 0x6e, 0x64, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0a, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x69, 0x6f, 0x5f, 0x70,
    0x6f, 0x70, 0x65, 0x6e, 0x28, 0x66, 0x6f, 0x75, 0x6e, 0x64, 0x2c, 0x2e, 0x2e, 0x2e, 0x29, 0x0a,
    0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x65, 0x6e, 0x64, 0x0a, 0x0a, 0x6c, 0x6f, 0x63,
    0x61, 0x6c, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x6c, 0x75, 0x61, 0x74,
    0x65, 0x78, 0x5f, 0x69, 0x6f, 0x5f, 0x6c, 0x69, 0x6e, 0x65, 0x73, 0x28, 0x6e, 0x61, 0x6d, 0x65,
    0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x66, 0x20, 0x3d, 0x20,
    0x69, 0x6f, 0x5f, 0x6f, 0x70, 0x65, 0x6e, 0x28, 0x6e, 0x61, 0x6d, 0x65, 0x2c, 0x27, 0x72, 0x27,
    0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x66, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0a,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x66,
    0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x66, 0x69, 0x6f,
    0x5f, 0x72, 0x65, 0x61, 0x64, 0x6c, 0x69, 0x6e, 0x65, 0x28, 0x66, 0x29, 0x0a, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64,
    0x0a, 0x65, 0x6e, 0x64, 0x0a, 0x0a, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x66, 0x75, 0x6e, 0x63,
    0x74, 0x69, 0x6f, 0x6e, 0x20, 0x6c, 0x75, 0x61, 0x74, 0x65, 0x78, 0x5f, 0x69, 0x6f, 0x5f, 0x72,
    0x65, 0x61, 0x64, 0x6c, 0x69, 0x6e, 0x65, 0x28, 0x66, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72,
    0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x29,
    0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20,
    0x66, 0x69, 0x6f, 0x5f, 0x72, 0x65, 0x61, 0x64, 0x6c, 0x69, 0x6e, 0x65, 0x28, 0x66, 0x29, 0x0a,
    0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x65, 0x6e, 0x64, 0x0a, 0x0a, 0x69, 0x6f, 0x2e,
    0x6c, 0x69, 0x6e, 0x65, 0x73, 0x20, 0x3d, 0x20, 0x6c, 0x75, 0x61, 0x74, 0x65, 0x78, 0x5f, 0x69,
    0x6f, 0x5f, 0x6c, 0x69, 0x6e, 0x65, 0x73, 0x0a, 0x6d, 0x74, 0x2e, 0x6c, 0x69, 0x6e, 0x65, 0x73,
    0x20, 0x3d, 0x20, 0x6c, 0x75, 0x61, 0x74, 0x65, 0x78, 0x5f, 0x69, 0x6f, 0x5f, 0x72, 0x65, 0x61,
    0x64, 0x6c, 0x69, 0x6e, 0x65, 0x0a, 0x0a, 0x2d, 0x2d, 0x20, 0x57, 0x65, 0x20, 0x61, 0x73, 0x73,
    0x75, 0x6d, 0x65, 0x20, 0x6d, 0x61, 0x6e, 0x61, 0x67, 0x65, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x74,
    0x6f, 0x20, 0x62, 0x65, 0x20, 0x70, 0x72, 0x6f, 0x76, 0x69, 0x64, 0x65, 0x64, 0x20, 0x62, 0x79,
    0x20, 0x74, 0x68, 0x65, 0x20, 0x72, 0x65, 0x70, 0x6c, 0x61, 0x63, 0x65, 0x6d, 0x65, 0x6e, 0x74,
    0x20, 0x6f, 0x66, 0x20, 0x6b, 0x70, 0x73, 0x65, 0x2e, 0x20, 0x54, 0x68, 0x69, 0x73, 0x20, 0x69,
    0x73, 0x20, 0x74, 0x68, 0x65, 0x0a, 0x2d, 0x2d, 0x20, 0x63, 0x61, 0x73, 0x65, 0x20, 0x69, 0x6e,
    0x20, 0x43, 0x6f, 0x6e, 0x54, 0x65, 0x58, 0x74, 0x2e, 0x0a, 0x0a, 0x69, 0x66, 0x20, 0x6b, 0x70,
    0x73, 0x65, 0x75, 0x73, 0x65, 0x64, 0x20, 0x3d, 0x3d, 0x20, 0x31, 0x20, 0x74, 0x68, 0x65, 0x6e,
    0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x6f, 0x2e, 0x6f, 0x70, 0x65, 0x6e, 0x20, 0x20, 0x3d,
    0x20, 0x6c, 0x75, 0x61, 0x74, 0x65, 0x78, 0x5f, 0x69, 0x6f, 0x5f, 0x6f, 0x70, 0x65, 0x6e, 0x0a,
    0x20, 0x20, 0x20, 0x20, 0x69, 0x6f, 0x2e, 0x70, 0x6f, 0x70, 0x65, 0x6e, 0x20, 0x3d, 0x20, 0x6c,
    0x75, 0x61, 0x74, 0x65, 0x78, 0x5f, 0x69, 0x6f, 0x5f, 0x70, 0x6f, 0x70, 0x65, 0x6e, 0x0a, 0x0a,
    0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x73, 0x61, 0x66, 0x65, 0x72, 0x6f, 0x70, 0x74, 0x69,
    0x6f, 0x6e, 0x20, 0x3d, 0x3d, 0x20, 0x31, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0a, 0x0a, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x73, 0x2e, 0x65, 0x78, 0x65, 0x63, 0x75, 0x74, 0x65,
    0x20, 0x3d, 0x20, 0x6e, 0x69, 0x6c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6f,
    0x73, 0x2e, 0x73, 0x70, 0x61, 0x77, 0x6e, 0x20, 0x20, 0x20, 0x3d, 0x20, 0x6e, 0x69, 0x6c, 0x0a,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x73, 0x2e, 0x65, 0x78, 0x65, 0x63, 0x20,
    0x20, 0x20, 0x20, 0x3d, 0x20, 0x6e, 0x69, 0x6c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x6f, 0x73, 0x2e, 0x73, 0x65, 0x74, 0x65, 0x6e, 0x76, 0x20, 0x20, 0x3d, 0x20, 0x6e, 0x69,
    0x6c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x73, 0x2e, 0x74, 0x65, 0x6d,
    0x70, 0x64, 0x69, 0x72, 0x20, 0x3d, 0x20, 0x6e, 0x69, 0x6c, 0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x69, 0x6f, 0x2e, 0x70, 0x6f, 0x70, 0x65, 0x6e, 0x20, 0x20, 0x20, 0x3d,
    0x20, 0x6e, 0x69, 0x6c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x6f, 0x2e,
    0x6f, 0x70, 0x65, 0x6e, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x20, 0x6e, 0x69, 0x6c, 0x0a, 0x0a, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x73, 0x2e, 0x72, 0x65, 0x6e, 0x61, 0x6d, 0x65,
    0x20, 0x20, 0x3d, 0x20, 0x6e, 0x69, 0x6c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x6f, 0x73, 0x2e, 0x72, 0x65, 0x6d, 0x6f, 0x76, 0x65, 0x20, 0x20, 0x3d, 0x20, 0x6e, 0x69, 0x6c,
    0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x6f, 0x2e, 0x74, 0x6d, 0x70,
    0x66, 0x69, 0x6c, 0x65, 0x20, 0x3d, 0x20, 0x6e, 0x69, 0x6c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x69, 0x6f, 0x2e, 0x6f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x20, 0x3d, 0x20,
    0x6e, 0x69, 0x6c, 0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x66, 0x73,
    0x2e, 0x63, 0x68, 0x64, 0x69, 0x72, 0x20, 0x20, 0x3d, 0x20, 0x6e, 0x69, 0x6c, 0x0a, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x66, 0x73, 0x2e, 0x6c, 0x6f, 0x63, 0x6b, 0x20, 0x20,
    0x20, 0x3d, 0x20, 0x6e, 0x69, 0x6c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c,
    0x66, 0x73, 0x2e, 0x74, 0x6f, 0x75, 0x63, 0x68, 0x20, 0x20, 0x3d, 0x20, 0x6e, 0x69, 0x6c, 0x0a,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x66, 0x73, 0x2e, 0x72, 0x6d, 0x64, 0x69,
    0x72, 0x20, 0x20, 0x3d, 0x20, 0x6e, 0x69, 0x6c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x6c, 0x66, 0x73, 0x2e, 0x6d, 0x6b, 0x64, 0x69, 0x72, 0x20, 0x20, 0x3d, 0x20, 0x6e, 0x69,
    0x6c, 0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x6f, 0x2e, 0x73, 0x61,
    0x76, 0x65, 0x64, 0x5f, 0x70, 0x6f, 0x70, 0x65, 0x6e, 0x20, 0x3d, 0x20, 0x6e, 0x69, 0x6c, 0x0a,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x6f, 0x2e, 0x73, 0x61, 0x76, 0x65, 0x64,
    0x5f, 0x6f, 0x70, 0x65, 0x6e, 0x20, 0x20, 0x3d, 0x20, 0x6c, 0x75, 0x61, 0x74, 0x65, 0x78, 0x5f,
    0x69, 0x6f, 0x5f, 0x6f, 0x70, 0x65, 0x6e, 0x5f, 0x72, 0x65, 0x61, 0x64, 0x6f, 0x6e, 0x6c, 0x79,
    0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69,
    0x66, 0x20, 0x73, 0x61, 0x66, 0x65, 0x72, 0x6f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x3d,
    0x20, 0x31, 0x20, 0x6f, 0x72, 0x20, 0x73, 0x68, 0x65, 0x6c, 0x6c, 0x65, 0x73, 0x63, 0x61, 0x70,
    0x65, 0x20, 0x7e, 0x3d, 0x20, 0x32, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x66, 0x66, 0x69, 0x20, 0x3d, 0x20,
    0x72, 0x65, 0x71, 0x75, 0x69, 0x72, 0x65, 0x28, 0x27, 0x66, 0x66, 0x69, 0x27, 0x29, 0x0a, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x6b, 0x2c, 0x20, 0x76, 0x20,
    0x69, 0x6e, 0x20, 0x6e, 0x65, 0x78, 0x74, 0x2c, 0x20, 0x66, 0x66, 0x69, 0x20, 0x64, 0x6f, 0x0a,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x6b,
    0x20, 0x7e, 0x3d, 0x20, 0x27, 0x67, 0x63, 0x27, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0a, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66, 0x66,
    0x69, 0x5b, 0x6b, 0x5d, 0x20, 0x3d, 0x20, 0x6e, 0x69, 0x6c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x66,
    0x66, 0x69, 0x20, 0x3d, 0x20, 0x6e, 0x69, 0x6c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64,
    0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x2d, 0x20, 0x6f, 0x73, 0x2e, 0x5b, 0x65, 0x78, 0x65,
    0x63, 0x75, 0x74, 0x65, 0x7c, 0x6f, 0x73, 0x2e, 0x73, 0x70, 0x61, 0x77, 0x6e, 0x7c, 0x6f, 0x73,
    0x2e, 0x65, 0x78, 0x65, 0x63, 0x5d, 0x20, 0x61, 0x6c, 0x72, 0x65, 0x61, 0x64, 0x79, 0x20, 0x61,
    0x72, 0x65, 0x20, 0x73, 0x68, 0x65, 0x6c, 0x6c, 0x65, 0x73, 0x63, 0x61, 0x70, 0x65, 0x20, 0x61,
    0x77, 0x61, 0x72, 0x65, 0x29, 0x0a, 0x0a, 0x65, 0x6e, 0x64, 0x0a, 0x0a, 0x69, 0x66, 0x20, 0x6d,
    0x64, 0x35, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63,
    0x61, 0x6c, 0x20, 0x73, 0x75, 0x6d, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x20, 0x6d, 0x64, 0x35, 0x2e,
    0x73, 0x75, 0x6d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x67, 0x73,
    0x75, 0x62, 0x20, 0x20, 0x20, 0x3d, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x67, 0x73,
    0x75, 0x62, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x66, 0x6f, 0x72,
    0x6d, 0x61, 0x74, 0x20, 0x3d, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x66, 0x6f, 0x72,
    0x6d, 0x61, 0x74, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x62, 0x79,
    0x74, 0x65, 0x20, 0x20, 0x20, 0x3d, 0x20, 0x73, 0x74, 0x72, 0x69, 0x6e, 0x67, 0x2e, 0x62, 0x79,
    0x74, 0x65, 0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e,
    0x20, 0x6d, 0x64, 0x35, 0x2e, 0x73, 0x75, 0x6d, 0x68, 0x65, 0x78, 0x61, 0x28, 0x6b, 0x29, 0x0a,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x28,
    0x67, 0x73, 0x75, 0x62, 0x28, 0x73, 0x75, 0x6d, 0x28, 0x6b, 0x29, 0x2c, 0x20, 0x22, 0x2e, 0x22,
    0x2c, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x63, 0x29, 0x0a, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e,
    0x20, 0x66, 0x6f, 0x72, 0x6d, 0x61, 0x74, 0x28, 0x22, 0x25, 0x30, 0x32, 0x78, 0x22, 0x2c, 0x62,
    0x79, 0x74, 0x65, 0x28, 0x63, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x65, 0x6e, 0x64, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x0a, 0x20,
    0x20, 0x20, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x6d, 0x64, 0x35, 0x2e,
    0x73, 0x75, 0x6d, 0x48, 0x45, 0x58, 0x41, 0x28, 0x6b, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x28, 0x67, 0x73, 0x75, 0x62, 0x28,
    0x73, 0x75, 0x6d, 0x28, 0x6b, 0x29, 0x2c, 0x20, 0x22, 0x2e, 0x22, 0x2c, 0x20, 0x66, 0x75, 0x6e,
    0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x63, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x66, 0x6f, 0x72, 0x6d,
    0x61, 0x74, 0x28, 0x22, 0x25, 0x30, 0x32, 0x58, 0x22, 0x2c, 0x62, 0x79, 0x74, 0x65, 0x28, 0x63,
    0x29, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x29, 0x29,
    0x0a, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64, 0x0a, 0x0a, 0x65, 0x6e, 0x64, 0x0a, 0x0a, 0x00
  };
  return luaL_dostring(L, (const char*) luatex_core_lua);
}
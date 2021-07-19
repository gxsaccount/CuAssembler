#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wcast-qual"
#define __NV_CUBIN_HANDLE_STORAGE__ static
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "vectoradd.fatbin.c"
extern void __device_stub__Z6vecAddPdS_S_i(double *, double *, double *, int);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void) __attribute__((__constructor__));
void __device_stub__Z6vecAddPdS_S_i(double *__par0, double *__par1, double *__par2, int __par3){__cudaLaunchPrologue(4);__cudaSetupArgSimple(__par0, 0UL);__cudaSetupArgSimple(__par1, 8UL);__cudaSetupArgSimple(__par2, 16UL);__cudaSetupArgSimple(__par3, 24UL);__cudaLaunch(((char *)((void ( *)(double *, double *, double *, int))vecAdd)));}
# 21 "vectoradd.cu"
void vecAdd( double *__cuda_0,double *__cuda_1,double *__cuda_2,int __cuda_3)
# 21 "vectoradd.cu"
{__device_stub__Z6vecAddPdS_S_i( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 27 "vectoradd.cu"
}
# 1 "vectoradd.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback( void **__T3) {  __nv_dummy_param_ref(__T3); __nv_save_fatbinhandle_for_managed_rt(__T3); __cudaRegisterEntry(__T3, ((void ( *)(double *, double *, double *, int))vecAdd), _Z6vecAddPdS_S_i, (-1)); }
static void __sti____cudaRegisterAll(void) {  __cudaRegisterBinary(__nv_cudaEntityRegisterCallback);  }

#pragma GCC diagnostic pop

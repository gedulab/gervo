# gervo
case study of returning struct in C 


code generted by GCC in YourLand code book based on rk3588 SoC:
```
   0x0000005555550988 <+60>:    mov     w0, #0x1                        // #1
   0x000000555555098c <+64>:    bl      0x55555506e0 <__printf_chk@plt>
   0x0000005555550990 <+68>:    ldr     x0, [x21]
   0x0000005555550994 <+72>:    add     x20, sp, #0x30
   0x0000005555550998 <+76>:    mov     x8, x20
   0x000000555555099c <+80>:    ldrb    w0, [x0, #1]
   0x00000055555509a0 <+84>:    bl      0x5555550854 <get_city>
   0x00000055555509a4 <+88>:    ldp     q0, q1, [x20]
   0x00000055555509a8 <+92>:    stp     q0, q1, [x19]
   0x00000055555509ac <+96>:    ldp     q0, q1, [x20, #32]
   0x00000055555509b0 <+100>:   stp     q0, q1, [x19, #32]
   0x00000055555509b4 <+104>:   ldp     q0, q1, [x20, #64]
   0x00000055555509b8 <+108>:   stp     q0, q1, [x19, #64]
   0x00000055555509bc <+112>:   ldp     q0, q1, [x20, #96]
--Type <RET> for more, q to quit, c to continue without paging--
   0x00000055555509c0 <+116>:   stp     q0, q1, [x19, #96]
   0x00000055555509c4 <+120>:   ldp     q0, q1, [x20, #128]
   0x00000055555509c8 <+124>:   stp     q0, q1, [x19, #128]
   0x00000055555509cc <+128>:   ldp     q0, q1, [x20, #160]
   0x00000055555509d0 <+132>:   stp     q0, q1, [x19, #160]
   0x00000055555509d4 <+136>:   ldr     q0, [x20, #192]
   0x00000055555509d8 <+140>:   str     q0, [x19, #192]
   0x00000055555509dc <+144>:   ldr     x3, [x21]
   0x00000055555509e0 <+148>:   mov     w2, w22
   0x00000055555509e4 <+152>:   adrp    x1, 0x5555550000
   0x00000055555509e8 <+156>:   add     x1, x1, #0xb08
   0x00000055555509ec <+160>:   mov     w0, #0x1                        // #1
   0x00000055555509f0 <+164>:   bl      0x55555506e0 <__printf_chk@plt>


geduer@ulan:~/gelabs/gervo$ gcc -v
Using built-in specs.
COLLECT_GCC=gcc
COLLECT_LTO_WRAPPER=/usr/lib/gcc/aarch64-linux-gnu/12/lto-wrapper
Target: aarch64-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 12.3.0-1ubuntu1~23.04' --with-bugurl=file:///usr/share/doc/gcc-12/README.Bugs --enable-languages=c,ada,c++,go,d,fortran,objc,obj-c++,m2 --prefix=/usr --with-gcc-major-version-only --program-suffix=-12 --program-prefix=aarch64-linux-gnu- --enable-shared --enable-linker-build-id --libexecdir=/usr/lib --without-included-gettext --enable-threads=posix --libdir=/usr/lib --enable-nls --enable-clocale=gnu --enable-libstdcxx-debug --enable-libstdcxx-time=yes --with-default-libstdcxx-abi=new --enable-gnu-unique-object --disable-libquadmath --disable-libquadmath-support --enable-plugin --enable-default-pie --with-system-zlib --enable-libphobos-checking=release --with-target-system-zlib=auto --enable-objc-gc=auto --enable-multiarch --enable-fix-cortex-a53-843419 --disable-werror --enable-checking=release --build=aarch64-linux-gnu --host=aarch64-linux-gnu --target=aarch64-linux-gnu
Thread model: posix

```
Supported LTO compression algorithms: zlib zstd
gcc version 12.3.0 (Ubuntu 12.3.0-1ubuntu1~23.04)


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vcpu {int exc_vector; scalar_t__ exc_errcode; scalar_t__ exc_errcode_valid; scalar_t__ exception_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static uint64_t
FUNC_0(struct vcpu *VAR_3)
{
 uint64_t VAR_4 = 0;

 if (VAR_3->exception_pending) {
  VAR_4 = VAR_3->exc_vector & 0xff;
  VAR_4 |= VAR_2 | VAR_1;
  if (VAR_3->exc_errcode_valid) {
   VAR_4 |= VAR_0;
   VAR_4 |= (uint64_t)VAR_3->exc_errcode << 32;
  }
 }
 return (VAR_4);
}

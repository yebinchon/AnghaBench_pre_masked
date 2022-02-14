
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct xsave_limits {int xcr0_allowed; int xsave_enabled; } ;
struct vmx {int vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int ) ;
 struct xsave_limits* FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct vmx *VAR_13, int VAR_14)
{
 uint64_t VAR_15;
 const struct xsave_limits *VAR_16;

 VAR_16 = FUNC_5();
 if (FUNC_0(VAR_14, VAR_3) != 0) {
  FUNC_2(VAR_13->vm, VAR_14);
  return (VAR_1);
 }


 if (!VAR_16->xsave_enabled ||
  !(FUNC_4(VAR_14, VAR_6) & VAR_0))
 {
  FUNC_3(VAR_13->vm, VAR_14);
  return (VAR_1);
 }

 VAR_15 = FUNC_0(VAR_14, VAR_4) << 32
  | (FUNC_0(VAR_14, VAR_2) & 0xffffffff);

 if ((VAR_15 & ~VAR_16->xcr0_allowed) != 0) {
  FUNC_2(VAR_13->vm, VAR_14);
  return (VAR_1);
 }

 if (!(VAR_15 & VAR_12)) {
  FUNC_2(VAR_13->vm, VAR_14);
  return (VAR_1);
 }


 if (VAR_15 & VAR_9 &&
     (VAR_15 & VAR_7) != VAR_7) {
  FUNC_2(VAR_13->vm, VAR_14);
  return (VAR_1);
 }





 if (VAR_15 & VAR_8 &&
     (VAR_15 & (VAR_8 | VAR_7)) !=
     (VAR_8 | VAR_7)) {
  FUNC_2(VAR_13->vm, VAR_14);
  return (VAR_1);
 }





 if (((VAR_15 & VAR_11) != 0) !=
     ((VAR_15 & VAR_10) != 0)) {
  FUNC_2(VAR_13->vm, VAR_14);
  return (VAR_1);
 }

 FUNC_1(VAR_14, VAR_5, VAR_15);
 return (VAR_1);
}

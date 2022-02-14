
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct rtcdev {int reg_a; int reg_d; scalar_t__ reg_c; int reg_b; } ;
struct vrtc {int base_rtctime; int addr; struct rtcdev rtcdev; int callout; int mtx; struct vm* vm; } ;
struct vm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vrtc*) ;
 int FUNC_1 (struct vrtc*) ;
 int FUNC_2 (struct vrtc*) ;
 int FUNC_3 (struct vrtc*,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_6 () ;
 struct vrtc* FUNC_7 (int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__,struct vrtc*,int ) ;
 int FUNC_11 (struct vrtc*,scalar_t__,int ) ;

struct vrtc *
FUNC_12(struct vm *VAR_6)
{
 struct vrtc *VAR_7;
 struct rtcdev *VAR_8;
 time_t VAR_9;

 VAR_7 = FUNC_7(sizeof(struct vrtc));
 FUNC_2(VAR_7);
 FUNC_3(VAR_7, sizeof(struct vrtc));
 VAR_7->vm = VAR_6;

 FUNC_8(&VAR_7->mtx, ((void*)0));

 FUNC_5(FUNC_6(), VAR_0, &VAR_5);

 FUNC_4(&VAR_7->callout, 1);


 VAR_8 = &VAR_7->rtcdev;
 VAR_8->reg_a = 0x20;
 VAR_8->reg_b = VAR_1;
 VAR_8->reg_c = 0;
 VAR_8->reg_d = VAR_2;


 VAR_7->addr = VAR_3;




 VAR_9 = 0;

 FUNC_0(VAR_7);
 VAR_7->base_rtctime = VAR_4;
 FUNC_11(VAR_7, VAR_9, FUNC_9());
 FUNC_10(VAR_9, VAR_7, 0);
 FUNC_1(VAR_7);

 return (VAR_7);
}

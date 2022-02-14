
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtcdev {int reg_c; } ;
struct vrtc {int vm; struct rtcdev rtcdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 scalar_t__ FUNC_2 (struct vrtc*) ;
 scalar_t__ FUNC_3 (struct vrtc*) ;
 scalar_t__ FUNC_4 (struct vrtc*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct vrtc *VAR_5, uint8_t VAR_6)
{
 struct rtcdev *VAR_7;
 int VAR_8, VAR_9;
 uint8_t VAR_10, VAR_11;

 VAR_7 = &VAR_5->rtcdev;
 VAR_6 &= VAR_0 | VAR_2 | VAR_3;

 VAR_8 = VAR_7->reg_c & VAR_1;
 if ((FUNC_2(VAR_5) && (VAR_6 & VAR_0) != 0) ||
     (FUNC_3(VAR_5) && (VAR_6 & VAR_2) != 0) ||
     (FUNC_4(VAR_5) && (VAR_6 & VAR_3) != 0)) {
  VAR_9 = VAR_1;
 } else {
  VAR_9 = 0;
 }

 VAR_10 = VAR_7->reg_c;
 VAR_7->reg_c = (uint8_t) (VAR_9 | VAR_6);
 VAR_11 = VAR_10 ^ VAR_7->reg_c;
 if (VAR_11) {
  FUNC_1(VAR_5->vm, "RTC reg_c changed from %#x to %#x",
      VAR_10, VAR_7->reg_c);
 }

 if (!VAR_8 && VAR_9) {
  FUNC_0(VAR_5->vm, "RTC irq %d asserted", VAR_4);
  FUNC_5(VAR_5->vm, VAR_4);
  FUNC_6(VAR_5->vm, VAR_4);
 } else if (VAR_8 && !VAR_9) {
  FUNC_0(VAR_5->vm, "RTC irq %d deasserted", VAR_4);
 }
}

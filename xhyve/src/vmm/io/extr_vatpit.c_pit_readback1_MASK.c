
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vatpit {struct channel* channel; } ;
struct channel {int slatched; scalar_t__ mode; int status; int olbyte; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vatpit*,struct channel*,int) ;
 scalar_t__ FUNC_1 (struct vatpit*,int) ;

__attribute__((used)) static int
FUNC_2(struct vatpit *VAR_4, int VAR_5, uint8_t VAR_6)
{
 struct channel *VAR_7;

 VAR_7 = &VAR_4->channel[VAR_5];





 if (!(VAR_6 & VAR_1) && !VAR_7->olbyte) {
  (void) FUNC_0(VAR_4, VAR_7, 1);
 }

 if (!(VAR_6 & VAR_2) && !VAR_7->slatched) {
  VAR_7->slatched = 1;





  if (VAR_7->mode == VAR_0 && FUNC_1(VAR_4, VAR_5))
   VAR_7->status |= VAR_3;
  else
   VAR_7->status &= ~VAR_3;
 }

 return (0);
}

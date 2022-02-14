
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vatpit {int freq_sbt; struct channel* channel; } ;
struct channel {int mode; int now_sbt; int initial; } ;
typedef int sbintime_t ;



 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(struct vatpit *VAR_0, int VAR_1)
{
 struct channel *VAR_2;
 sbintime_t VAR_3;
 int VAR_4;

 VAR_2 = &VAR_0->channel[VAR_1];

 switch (VAR_2->mode) {
 case 128:
  VAR_3 = (FUNC_0() - VAR_2->now_sbt) / VAR_0->freq_sbt;
  VAR_4 = ((VAR_2->initial - VAR_3) <= 0);
  break;
 default:
  VAR_4 = 0;
  break;
 }

 return (VAR_4);
}

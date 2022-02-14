
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vatpit {scalar_t__ freq_sbt; struct channel* channel; } ;
struct channel {scalar_t__ initial; scalar_t__ callout_sbt; int callout_arg; int callout; } ;
typedef scalar_t__ sbintime_t ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ,int ,int *,int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct vatpit *VAR_2)
{
 struct channel *VAR_3;
 sbintime_t VAR_4, VAR_5;

 VAR_3 = &VAR_2->channel[0];
 if (VAR_3->initial != 0) {
  VAR_5 = VAR_3->initial * VAR_2->freq_sbt;
  VAR_3->callout_sbt = VAR_3->callout_sbt + VAR_5;






  VAR_4 = FUNC_1();
  if (VAR_3->callout_sbt < VAR_4)
   VAR_3->callout_sbt = VAR_4 + VAR_5;

  FUNC_0(&VAR_3->callout, VAR_3->callout_sbt,
      0, VAR_1, &VAR_3->callout_arg,
      VAR_0);
 }
}

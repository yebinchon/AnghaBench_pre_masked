
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_sec; } ;
struct time {scalar_t__ sec; scalar_t__ tz; } ;
struct TYPE_3__ {scalar_t__ interval; scalar_t__ in_seconds; int name; int compact_symbol; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,size_t,int *,char*,scalar_t__,scalar_t__,char*,...) ;
 scalar_t__ FUNC_2 (struct timeval*,int *) ;

__attribute__((used)) static const char *
FUNC_3(const struct time *VAR_1, char *VAR_2, size_t VAR_3, bool VAR_4)
{
 struct timeval VAR_5;
 time_t VAR_6 = VAR_1->sec + VAR_1->tz;
 time_t VAR_7;
 int VAR_8;

 if (FUNC_2(&VAR_5, ((void*)0)))
  return "";

 VAR_7 = VAR_5.tv_sec < VAR_6 ? VAR_6 - VAR_5.tv_sec : VAR_5.tv_sec - VAR_6;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0); VAR_8++) {
  if (VAR_7 >= VAR_0[VAR_8].interval && VAR_0[VAR_8].interval)
   continue;

  VAR_7 /= VAR_0[VAR_8].in_seconds;
  if (VAR_4) {
   if (!FUNC_1(VAR_2, VAR_3, ((void*)0), "%s%ld%c",
        VAR_5.tv_sec >= VAR_6 ? "" : "-",
        VAR_7, VAR_0[VAR_8].compact_symbol))
    return "";

  } else if (!FUNC_1(VAR_2, VAR_3, ((void*)0), "%ld %s%s %s",
        VAR_7, VAR_0[VAR_8].name,
        VAR_7 > 1 ? "s" : "",
        VAR_5.tv_sec >= VAR_6 ? "ago" : "ahead"))
   return "";

  return VAR_2;
 }

 return "";
}

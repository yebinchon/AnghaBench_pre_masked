
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*,int,scalar_t__*) ;

__attribute__((used)) static inline int64
FUNC_4(const char *VAR_3, int64 VAR_4, int64 VAR_5, const char *VAR_6)
{
 int64 VAR_7;
 if (!FUNC_3(VAR_3, 1, &VAR_7))
  FUNC_0(VAR_2,
    (FUNC_1(VAR_0),
     FUNC_2("parameter timescaledb.%s must be an integer for hypertables with integer "
      "time values",
      VAR_6)));
 if (VAR_7 < VAR_4 || VAR_7 > VAR_5)
  FUNC_0(VAR_2,
    (FUNC_1(VAR_1),
     FUNC_2("timescaledb.%s out of range", VAR_6)));
 return VAR_7;
}

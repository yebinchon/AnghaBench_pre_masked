
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
typedef scalar_t__ hrtime_t ;
struct TYPE_5__ {int rto_dcols; } ;
struct TYPE_4__ {unsigned long long io_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 int FUNC_0 (int ,char*,char const*,int ,unsigned long long,unsigned long long,double,double,unsigned int) ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 double FUNC_1 (double) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 () ;
 int * VAR_6 ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int,int) ;
 int FUNC_5 (int ) ;
 TYPE_1__ VAR_9 ;

__attribute__((used)) static inline void
FUNC_6(const char *VAR_10)
{
 int VAR_11, VAR_12;
 uint64_t VAR_13, VAR_14, VAR_15, VAR_16;
 hrtime_t VAR_17;
 double VAR_18, VAR_19;


 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {

  for (VAR_13 = VAR_4; VAR_13 <= VAR_3; VAR_13++) {

   VAR_12 = VAR_8.rto_dcols + VAR_11 + 1;
   VAR_9.io_size = 1ULL << VAR_13;
   VAR_7 = FUNC_4(&VAR_9,
       VAR_0, VAR_12, VAR_11+1);


   VAR_14 = VAR_2;
   VAR_14 /= VAR_9.io_size;

   VAR_17 = FUNC_2();
   for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
    FUNC_3(VAR_7);
   VAR_18 = FUNC_1((double)(FUNC_2() - VAR_17));

   VAR_16 = (1ULL << VAR_13) / VAR_8.rto_dcols;
   VAR_19 = (double)VAR_14 * (double)VAR_16;
   VAR_19 /= (1024.0 * 1024.0 * VAR_18);

   FUNC_0(VAR_1, "%10s, %8s, %zu, %10llu, %lf, %lf, %u\n",
       VAR_10,
       VAR_6[VAR_11],
       VAR_8.rto_dcols,
       (1ULL<<VAR_13),
       VAR_19,
       VAR_19 * (double)(VAR_12),
       (unsigned)VAR_14);

   FUNC_5(VAR_7);
  }
 }
}


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


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,int ,unsigned long long,unsigned long long,double,double,unsigned int) ;
 unsigned long long VAR_2 ;
 int FUNC_1 (int,scalar_t__) ;
 unsigned long long VAR_3 ;
 double FUNC_2 (double) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long long VAR_6 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 int FUNC_6 (TYPE_1__*,unsigned long long,int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int const*,int) ;
 TYPE_1__ VAR_10 ;

__attribute__((used)) static void
FUNC_9(const char *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 uint64_t VAR_15, VAR_16, VAR_17, VAR_18;
 hrtime_t VAR_19;
 double VAR_20, VAR_21;
 static const int VAR_22[7][3] = {
  {1, 2, 3},
  {0, 2, 3},
  {0, 1, 3},
  {2, 3, 4},
  {1, 3, 4},
  {0, 3, 4},
  {3, 4, 5}
 };

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  for (VAR_15 = VAR_3; VAR_15 <= VAR_2; VAR_15++) {


   VAR_13 = VAR_9.rto_dcols + VAR_4;
   VAR_10.io_size = 1ULL << VAR_15;





   if (VAR_10.io_size / VAR_9.rto_dcols <
       (1ULL << VAR_0))
    continue;

   VAR_8 = FUNC_6(&VAR_10,
       VAR_0, VAR_13, VAR_4);


   VAR_16 = (VAR_6);
   VAR_16 /= VAR_10.io_size;


   VAR_14 = FUNC_1(3, FUNC_4(VAR_8) -
       FUNC_5(VAR_8));

   VAR_19 = FUNC_3();
   for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
    FUNC_8(VAR_8, VAR_22[VAR_12], VAR_14);
   VAR_20 = FUNC_2((double)(FUNC_3() - VAR_19));

   VAR_18 = (1ULL << VAR_15) / VAR_9.rto_dcols;
   VAR_21 = (double)VAR_16 * (double)(VAR_18);
   VAR_21 /= (1024.0 * 1024.0 * VAR_20);

   FUNC_0(VAR_1, "%10s, %8s, %zu, %10llu, %lf, %lf, %u\n",
       VAR_11,
       VAR_7[VAR_12],
       VAR_9.rto_dcols,
       (1ULL<<VAR_15),
       VAR_21,
       VAR_21 * (double)VAR_13,
       (unsigned)VAR_16);

   FUNC_7(VAR_8);
  }
 }
}

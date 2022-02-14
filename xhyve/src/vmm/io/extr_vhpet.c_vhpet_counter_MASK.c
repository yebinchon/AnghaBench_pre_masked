
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vhpet {int countbase; int countbase_sbt; int freq_sbt; } ;
typedef int sbintime_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct vhpet*) ;

__attribute__((used)) static uint32_t
FUNC_3(struct vhpet *VAR_0, sbintime_t *VAR_1)
{
 uint32_t VAR_2;
 sbintime_t VAR_3, VAR_4;

 VAR_2 = VAR_0->countbase;
 if (FUNC_2(VAR_0)) {
  VAR_3 = FUNC_1();
  VAR_4 = VAR_3 - VAR_0->countbase_sbt;
  FUNC_0(VAR_4 >= 0, ("vhpet_counter: uptime went backwards: "
      "%#llx to %#llx", VAR_0->countbase_sbt, VAR_3));
  VAR_2 += VAR_4 / VAR_0->freq_sbt;
  if (VAR_1 != ((void*)0))
   *VAR_1 = VAR_3;
 } else {





  FUNC_0(VAR_1 == ((void*)0), ("vhpet_counter: nowptr must be NULL"));
 }
 return (VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int bd_dev; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct block_device*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct block_device*) ;
 struct block_device* FUNC_3 (char const*) ;
 unsigned int VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_4(const char *VAR_3)
{
 struct block_device *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_3(VAR_3);
 if (FUNC_0(VAR_4))
  return (VAR_0);

 VAR_5 = FUNC_1(VAR_4->bd_dev);
 FUNC_2(VAR_4);

 if (VAR_5 == VAR_2)
  return (VAR_1);

 return (VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;


 int FUNC_0 (int,int,char*,int ,int ,double const) ;

void FUNC_1(size_t VAR_0, size_t VAR_1, int VAR_2)
{
  const double VAR_3 = (double)VAR_1 / VAR_0;
  if (VAR_3 >= 10) {
      return;
  }
  FUNC_0(VAR_2, 1,
                    "WARNING: The maximum dictionary size %u is too large "
                    "compared to the source size %u! "
                    "size(source)/size(dictionary) = %f, but it should be >= "
                    "10! This may lead to a subpar dictionary! We recommend "
                    "training on sources at least 10x, and preferably 100x "
                    "the size of the dictionary! \n", (U32)VAR_0,
                    (U32)VAR_1, VAR_3);
}

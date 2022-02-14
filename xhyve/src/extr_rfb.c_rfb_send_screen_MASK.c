
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rfb_softc {int sending; unsigned int crc_width; unsigned int crc_height; int* crc_tmp; int mtx; scalar_t__ hw_crc; int crc; } ;
struct bhyvegc_image {unsigned int width; unsigned int height; int* data; } ;
typedef long ssize_t ;
typedef int Bytef ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 struct bhyvegc_image* FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int *,unsigned int) ;
 int FUNC_3 (int*,size_t,int) ;
 scalar_t__ FUNC_4 (unsigned int,int) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 long FUNC_8 (struct rfb_softc*,int,struct bhyvegc_image*) ;
 long FUNC_9 (struct rfb_softc*,int,struct bhyvegc_image*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static long
FUNC_10(struct rfb_softc *VAR_4, int VAR_5, int VAR_6)
{
 struct bhyvegc_image *VAR_7;
 ssize_t VAR_8;
 unsigned int VAR_9, VAR_10;
 unsigned int VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16;
 uint32_t *VAR_17;
 unsigned int VAR_18, VAR_19;
 long VAR_20;
 uint32_t *VAR_21, *VAR_22;
 unsigned int VAR_23;

 FUNC_1();
 VAR_7 = FUNC_0();

 FUNC_6(&VAR_4->mtx);
 if (VAR_4->sending) {
  FUNC_7(&VAR_4->mtx);
  return (1);
 }
 VAR_4->sending = 1;
 FUNC_7(&VAR_4->mtx);

 VAR_20 = 0;

 if (VAR_6) {
  VAR_20 = FUNC_8(VAR_4, VAR_5, VAR_7);
  goto done;
 }
 VAR_4->crc_width = VAR_7->width;
 VAR_4->crc_height = VAR_7->height;

 VAR_15 = VAR_4->crc_width;
 VAR_16 = VAR_4->crc_height;
 VAR_13 = (unsigned int)FUNC_4(VAR_4->crc_width, VAR_2);
 VAR_14 = (unsigned int)FUNC_4(VAR_4->crc_height, VAR_2);

 VAR_18 = VAR_15 & VAR_0;

 VAR_19 = VAR_16 & VAR_0;
 if (!VAR_19)
  VAR_19 = VAR_2;

 VAR_17 = VAR_7->data;







 VAR_21 = VAR_4->crc_tmp - VAR_13;
 VAR_22 = VAR_4->crc - VAR_13;
 VAR_23 = 0;
 FUNC_5(VAR_4->crc_tmp, 0, sizeof(uint32_t) * VAR_13 * VAR_14);
 for (VAR_10 = 0; VAR_10 < VAR_16; VAR_10++) {
  if ((VAR_10 & VAR_0) == 0) {
   VAR_21 += VAR_13;
   VAR_22 += VAR_13;
  }

  for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++) {
   if (VAR_4->hw_crc)
    VAR_21[VAR_9] = FUNC_3(VAR_17,
                 VAR_2 * sizeof(uint32_t),
                 VAR_21[VAR_9]);
   else
    VAR_21[VAR_9] = (uint32_t)FUNC_2(VAR_21[VAR_9],
                 (Bytef *)VAR_17,
                 VAR_2 * sizeof(uint32_t));

   VAR_17 += VAR_2;


   if ((VAR_10 & VAR_0) == VAR_0 || VAR_10 == (VAR_16-1)) {
    if (VAR_22[VAR_9] != VAR_21[VAR_9]) {
     VAR_22[VAR_9] = VAR_21[VAR_9];
     VAR_21[VAR_9] = 1;
     VAR_23++;
    } else {
     VAR_21[VAR_9] = 0;
    }
   }
  }

  if (VAR_18) {
   if (VAR_4->hw_crc)
    VAR_21[VAR_9] = FUNC_3(VAR_17,
                        (size_t)VAR_18 * sizeof(uint32_t),
                        VAR_21[VAR_9]);
   else
    VAR_21[VAR_9] = (uint32_t)FUNC_2(VAR_21[VAR_9],
                        (Bytef *)VAR_17,
                        VAR_18 * sizeof(uint32_t));
   VAR_17 += VAR_18;

   if ((VAR_10 & VAR_0) == VAR_0 || VAR_10 == (VAR_16-1)) {
    if (VAR_22[VAR_9] != VAR_21[VAR_9]) {
     VAR_22[VAR_9] = VAR_21[VAR_9];
     VAR_21[VAR_9] = 1;
     VAR_23++;
    } else {
     VAR_21[VAR_9] = 0;
    }
   }
  }
 }


 if (((VAR_23 * 100) / (VAR_13 * VAR_14)) >= VAR_3) {
  VAR_20 = FUNC_8(VAR_4, VAR_5, VAR_7);
  goto done;
 }


 VAR_21 = VAR_4->crc_tmp;
 for (VAR_10 = 0; VAR_10 < VAR_16; VAR_10 += VAR_2) {

  VAR_11 = (VAR_10 >> VAR_1);


  for (VAR_9 = 0; VAR_9 < VAR_13; VAR_9++) {
   if (*VAR_21++ == 0)
    continue;

   if (VAR_9 == (VAR_13 - 1) && VAR_18 > 0)
    VAR_12 = VAR_18;
   else
    VAR_12 = VAR_2;
   VAR_8 = FUNC_9(VAR_4, VAR_5,
    VAR_7,
    VAR_9 * VAR_2,
    VAR_11 * VAR_2,
           VAR_12,
    VAR_10 + VAR_2 >= VAR_16 ? VAR_19 : VAR_2);
   if (VAR_8 <= 0) {
    VAR_20 = VAR_8;
    goto done;
   }
  }
 }
 VAR_20 = 1;

done:
 FUNC_6(&VAR_4->mtx);
 VAR_4->sending = 0;
 FUNC_7(&VAR_4->mtx);

 return (VAR_20);
}

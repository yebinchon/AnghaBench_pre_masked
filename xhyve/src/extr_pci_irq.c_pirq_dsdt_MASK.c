
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char**,char*,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 unsigned int FUNC_4 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(void)
{
 char *VAR_4, *VAR_5;
 int VAR_6, VAR_7;

 VAR_4 = ((void*)0);
 for (VAR_6 = 0; ((unsigned) VAR_6) < FUNC_4(VAR_2); VAR_6++) {
  if (!FUNC_0(VAR_6))
   continue;
  if (VAR_4 == ((void*)0))
   FUNC_1(&VAR_4, "%d", VAR_6);
  else {
   VAR_5 = VAR_4;
   FUNC_1(&VAR_4, "%s,%d", VAR_5, VAR_6);
   FUNC_3(VAR_5);
  }
 }





 FUNC_2("");
 FUNC_2("Method (PIRV, 1, NotSerialized)");
 FUNC_2("{");
 FUNC_2("  If (And (Arg0, 0x%02X))", VAR_0);
 FUNC_2("  {");
 FUNC_2("    Return (0x00)");
 FUNC_2("  }");
 FUNC_2("  And (Arg0, 0x%02X, Local0)", VAR_1);
 FUNC_2("  If (LLess (Local0, 0x03))");
 FUNC_2("  {");
 FUNC_2("    Return (0x00)");
 FUNC_2("  }");
 FUNC_2("  If (LEqual (Local0, 0x08))");
 FUNC_2("  {");
 FUNC_2("    Return (0x00)");
 FUNC_2("  }");
 FUNC_2("  If (LEqual (Local0, 0x0D))");
 FUNC_2("  {");
 FUNC_2("    Return (0x00)");
 FUNC_2("  }");
 FUNC_2("  Return (0x01)");
 FUNC_2("}");

 for (VAR_7 = 0; ((unsigned) VAR_7) < FUNC_4(VAR_3); VAR_7++) {
  FUNC_2("");
  FUNC_2("Device (LNK%c)", 'A' + VAR_7);
  FUNC_2("{");
  FUNC_2("  Name (_HID, EisaId (\"PNP0C0F\"))");
  FUNC_2("  Name (_UID, 0x%02X)", VAR_7 + 1);
  FUNC_2("  Method (_STA, 0, NotSerialized)");
  FUNC_2("  {");
  FUNC_2("    If (PIRV (PIR%c))", 'A' + VAR_7);
  FUNC_2("    {");
  FUNC_2("       Return (0x0B)");
  FUNC_2("    }");
  FUNC_2("    Else");
  FUNC_2("    {");
  FUNC_2("       Return (0x09)");
  FUNC_2("    }");
  FUNC_2("  }");
  FUNC_2("  Name (_PRS, ResourceTemplate ()");
  FUNC_2("  {");
  FUNC_2("    IRQ (Level, ActiveLow, Shared, )");
  FUNC_2("      {%s}", VAR_4);
  FUNC_2("  })");
  FUNC_2("  Name (CB%02X, ResourceTemplate ()", VAR_7 + 1);
  FUNC_2("  {");
  FUNC_2("    IRQ (Level, ActiveLow, Shared, )");
  FUNC_2("      {}");
  FUNC_2("  })");
  FUNC_2("  CreateWordField (CB%02X, 0x01, CIR%c)",
      VAR_7 + 1, 'A' + VAR_7);
  FUNC_2("  Method (_CRS, 0, NotSerialized)");
  FUNC_2("  {");
  FUNC_2("    And (PIR%c, 0x%02X, Local0)", 'A' + VAR_7,
      VAR_0 | VAR_1);
  FUNC_2("    If (PIRV (Local0))");
  FUNC_2("    {");
  FUNC_2("      ShiftLeft (0x01, Local0, CIR%c)", 'A' + VAR_7);
  FUNC_2("    }");
  FUNC_2("    Else");
  FUNC_2("    {");
  FUNC_2("      Store (0x00, CIR%c)", 'A' + VAR_7);
  FUNC_2("    }");
  FUNC_2("    Return (CB%02X)", VAR_7 + 1);
  FUNC_2("  }");
  FUNC_2("  Method (_DIS, 0, NotSerialized)");
  FUNC_2("  {");
  FUNC_2("    Store (0x80, PIR%c)", 'A' + VAR_7);
  FUNC_2("  }");
  FUNC_2("  Method (_SRS, 1, NotSerialized)");
  FUNC_2("  {");
  FUNC_2("    CreateWordField (Arg0, 0x01, SIR%c)", 'A' + VAR_7);
  FUNC_2("    FindSetRightBit (SIR%c, Local0)", 'A' + VAR_7);
  FUNC_2("    Store (Decrement (Local0), PIR%c)", 'A' + VAR_7);
  FUNC_2("  }");
  FUNC_2("}");
 }
 FUNC_3(VAR_4);
}

fn main ()
{
  // Raw strings
  let _rse = r"";
  let _rse2 = r##""##;
  let _rs0 = r"foo #";
  let _rs1 = r#"foo #" bar"#;
  let _rs2 = r##"foo #"# bar"##;
  let _rshex = r"\xFF"; /* literal \xFF, not an hex escape */
  let _rspi = r#"π"#;

  // Raw byte strings
  let _rbse = br"";
  let _rbse2 = br##""##;
  let _rbs0 = br"foo #";
  let _rbs1 = br#"foo #" bar"#;
  let _rbs2 = br##"foo #"# bar"##;
  let _rbshex = br"\xFF"; /* literal \xFF, not an hex escape */
  let _rbspi = br#"π"#; // { dg-error "out of range" }

  // quote escapes
  let _strqs = "\'";
  let _strqd = "\"";
  let _rstrqs = r"\'";   // Not a real escape
  let _rstrqd = r#"\""#; // Not a real escape

  let _bstrqs = b"\'";
  let _bstrqd = b"\"";
  let _brstrqs = br"\'";   // Not a real escape
  let _brstrqd = br#"\""#; // Not a real escape

  // ascii and byte hex escapes
  let _strhex = "\x";    // { dg-error "invalid" }
  let _strhexx = "\xx";  // { dg-error "invalid" }
  let _strhexbz = "\x0"; // { dg-error "invalid" }
  let _strhexz = "\x00";
  let _strhesf = "\x7f";
  let _strhesF = "\x7F";
  let _strhes80 = "\x80"; // { dg-error "out of range" }
  let _strhesff = "\xfF"; // { dg-error "out of range" }

  let _rstrhex = r"\x";    // Not a real escape
  let _rstrhexx = r"\xx";  // Not a real escape
  let _rstrhexbz = r"\x0"; // Not a real escape
  let _rstrhexz = r"\x00"; // Not a real escape
  let _rstrhesf = r"\x7f"; // Not a real escape
  let _rstrhesF = r"\x7F"; // Not a real escape
  let _rstrhes80 = r"\x80"; // Not a real escape
  let _rstrhesff = r"\xfF"; // Not a real escape

  let _bstrhex = b"\x";    // { dg-error "invalid" }
  let _bstrhexx = b"\xx";  // { dg-error "invalid" }
  let _bstrhexbz = b"\x0"; // { dg-error "invalid" }
  let _bstrhexbz = b"\x00";
  let _bstrhesf = b"\x7f";
  let _bstrhesF = b"\x7F";
  let _bstrhes80 = b"\x80";
  let _bstrhesff = b"\xfF";

  let _brstrhex = br"\x";    // Not a real escape
  let _brstrhexx = br"\xx";  // Not a real escape
  let _brstrhexbz = br"\x0"; // Not a real escape
  let _brstrhexz = br"\x00"; // Not a real escape
  let _brstrhesf = br"\x7f"; // Not a real escape
  let _brstrhesF = br"\x7F"; // Not a real escape
  let _brstrhes80 = br"\x80"; // Not a real escape
  let _brstrhesff = br"\xfF"; // Not a real escape

  let _stab = "	";          /* tab */
  let _stabesc = "\t";      /* tab */
  let _rstab = r"	";      /* tab */
  let _rstabesc = r"\t";    /* raw \t*/
  let _bstab = b"	";      /* tab */
  let _bstabesc = b"\t";    /* tab */
  let _rbstab = br"	";      /* tab */
  let _rbstabesc = br"\t";  /* raw \t */

  let _sbss = "\\";
  let _sbsa = "\a"; // { dg-error "unknown escape" }
  let _rsbss = r"\\";  // Not a real escape
  let _rsbsa = r"\a";  // Not a real escape
  let _bsbss = b"\\";
  let _bsbsa = b"\a"; // { dg-error "unknown escape" }
  let _rbsbss = br"\\";  // Not a real escape
  let _rbsbsa = br"\a";  // Not a real escape

  let _szero = " ";        /* zero */
  let _szeroesc = "\0";     /* zero */
  let _rszero = r" ";      /* zero */
  let _rszeroesc = r"\0";   /* raw \0*/
  let _bszero = b" ";      /* zero */
  let _bszeroesc = b"\0";   /* zero */
  let _rbszero = br" ";    /* zero */
  let _rbszeroesc = br"\0"; /* raw \0 */
}


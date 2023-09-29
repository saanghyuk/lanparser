enum Lan{
  KO,
  US,
  CN,
  ERR
}

class LanParser {
  static Lan stringToLan(String lan){
    if(lan == "KO" || lan == "KR") return Lan.KO;
    if(lan == "US") return Lan.US;
    if(lan == "CN") return Lan.CN;
    return Lan.ERR;
  }
}



#ifndef ICALENDAR_H
#define ICALENDAR_H

#include <string>
#include <vector>

class iCalendar {

private:
  // The following are REQUIRED, but MOST NOT occur more that once.
  std::string m_prodid;  // e.g. "-//hacksw/handcal//NONSGML v1.0//EN""
  std::string m_version; // e.g. "2.0"
  // The following are OPTIONAL, but MUST NOT occur more that once.
  std::string calscale;
  std::string method;
  // The following are OPTIONAL and MAY occur more that once.
  std::vector<std::string> x_props;
  std::vector<std::string> methods;

public:
  iCalendar(str::string prodid, str::string version);

  void print() const;
  std::string getProdid() const { return m_prodid; }
}

#endif

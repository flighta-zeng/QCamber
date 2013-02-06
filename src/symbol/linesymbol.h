#ifndef __LINESYMBOL_H__
#define __LINESYMBOL_H__

#include "symbol.h"

#include <QtGui>

#include "featuresparser.h"
#include "record.h"

class LineSymbol: public Symbol {
public:
  LineSymbol(LineRecord* rec);

  QPainterPath painterPath(void);

private:
  qreal m_xs, m_ys;
  qreal m_xe, m_ye;
  int m_sym_num;
  QString m_sym_name;
  Polarity m_polarity;
  int m_dcode;
};

#endif /* __LineSymbol_H__ */
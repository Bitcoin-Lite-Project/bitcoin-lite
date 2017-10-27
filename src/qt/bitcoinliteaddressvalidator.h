// Copyright (c) 2011-2014 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOINLITE_QT_BITCOINLITEADDRESSVALIDATOR_H
#define BITCOINLITE_QT_BITCOINLITEADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BitcoinLiteAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitcoinLiteAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** BitcoinLite address widget validator, checks for a valid bitcoinlite address.
 */
class BitcoinLiteAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitcoinLiteAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BITCOINLITE_QT_BITCOINLITEADDRESSVALIDATOR_H

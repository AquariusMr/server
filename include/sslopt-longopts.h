#ifndef SSLOPT_LONGOPTS_INCLUDED
#define SSLOPT_LONGOPTS_INCLUDED

/*
   Copyright (c) 2000, 2010, Oracle and/or its affiliates.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA */

#if defined(HAVE_OPENSSL) && !defined(EMBEDDED_LIBRARY)
  {"ssl", OPT_SSL_SSL,
   "Enable SSL for connection (automatically enabled with other flags).",
   &opt_use_ssl, &opt_use_ssl, 0, GET_BOOL, OPT_ARG, 0, 0, 0, 0, 0, 0},
  {"ssl-ca", OPT_SSL_CA,
   "CA file in PEM format (check OpenSSL docs, implies --ssl).",
   &opt_ssl_ca, &opt_ssl_ca, 0, GET_STR, REQUIRED_ARG,
   0, 0, 0, 0, 0, 0},
  {"ssl-capath", OPT_SSL_CAPATH,
   "CA directory (check OpenSSL docs, implies --ssl).",
   &opt_ssl_capath, &opt_ssl_capath, 0, GET_STR, REQUIRED_ARG,
   0, 0, 0, 0, 0, 0},
  {"ssl-cert", OPT_SSL_CERT, "X509 cert in PEM format (implies --ssl).",
   &opt_ssl_cert, &opt_ssl_cert, 0, GET_STR, REQUIRED_ARG,
   0, 0, 0, 0, 0, 0},
  {"ssl-cipher", OPT_SSL_CIPHER, "SSL cipher to use (implies --ssl).",
   &opt_ssl_cipher, &opt_ssl_cipher, 0, GET_STR, REQUIRED_ARG,
   0, 0, 0, 0, 0, 0},
  {"ssl-key", OPT_SSL_KEY, "X509 key in PEM format (implies --ssl).",
   &opt_ssl_key, &opt_ssl_key, 0, GET_STR, REQUIRED_ARG,
   0, 0, 0, 0, 0, 0},
  {"ssl-crl", OPT_SSL_KEY, "Certificate revocation list (implies --ssl).",
   &opt_ssl_crl, &opt_ssl_crl, 0, GET_STR, REQUIRED_ARG,
   0, 0, 0, 0, 0, 0},
  {"ssl-crlpath", OPT_SSL_KEY, 
    "Certificate revocation list path (implies --ssl).",
   &opt_ssl_crlpath, &opt_ssl_crlpath, 0, GET_STR, REQUIRED_ARG,
   0, 0, 0, 0, 0, 0},
#ifdef MYSQL_CLIENT
  {"ssl-verify-server-cert", OPT_SSL_VERIFY_SERVER_CERT,
   "Verify server's \"Common Name\" in its cert against hostname used "
   "when connecting. This option is disabled by default.",
   &opt_ssl_verify_server_cert, &opt_ssl_verify_server_cert,
   0, GET_BOOL, OPT_ARG, 0, 0, 0, 0, 0, 0},
  {"ssl-fp", OPT_SSL_FP,
   "Verify server certificate's finger print against "
   "specified sha1 finger print (implies --ssl).",
   &opt_ssl_fp, &opt_ssl_fp, 0, GET_STR, REQUIRED_ARG,
   0, 0, 0, 0, 0, 0},
  {"ssl-fplist", OPT_SSL_FP_LIST,
   "Verify server certificate's finger print "
   "against the specified file which must contain one or more sha1 finger prints (implies --ssl).",
   &opt_ssl_fp_list, &opt_ssl_fp_list, 0, GET_STR, REQUIRED_ARG,
   0, 0, 0, 0, 0, 0},
#if !defined(CC_HAVE_SCHANNEL) && !defined(HAVE_YASSL)
  {"ssl-passphrase", OPT_SSL_PASSPHRASE,
    "Passphrase for passphrase protected key",
   &opt_ssl_passphrase, &opt_ssl_passphrase, 0, GET_STR, REQUIRED_ARG,
   0, 0, 0, 0, 0, 0},
#endif
#endif
#endif /* HAVE_OPENSSL */
#endif /* SSLOPT_LONGOPTS_INCLUDED */

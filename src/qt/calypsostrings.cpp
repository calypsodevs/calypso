

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *calypso_strings[] = {
QT_TRANSLATE_NOOP("calypso-core", " mints deleted\n"),
QT_TRANSLATE_NOOP("calypso-core", " mints updated, "),
QT_TRANSLATE_NOOP("calypso-core", " unconfirmed transactions removed\n"),
QT_TRANSLATE_NOOP("calypso-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Calculated accumulator checkpoint is not what is recorded by block index"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Cannot obtain a lock on data directory %s. CALYPSO Core is probably already "
"running."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Change automatic finalized budget voting behavior. mode=auto: Vote for only "
"exact finalized budget match to my generated budget. (string, default: auto)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Delete all zerocoin spends and mints that have been recorded to the "
"blockchain database and reindex them (0-1, default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Disable all CALYPSO specific functionality (Masternodes, Zerocoin, SwiftX, "
"Budgeting) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Enable SwiftX, show confirmations for locked transactions (bool, default: %s)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Enable automatic wallet backups triggered after each zCLP minting (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Enable or disable staking functionality for CLP inputs (0-1, default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Enable or disable staking functionality for zCLP inputs (0-1, default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Enable spork administration functionality with the appropriate private key."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Error: The transaction is larger than the maximum allowed transaction size!"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Error: Unsupported argument -checklevel found. Checklevel must be level 4."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Execute command when the best block changes and its size is over (%s in cmd "
"is replaced by block hash, %d with the block size)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Failed to find coin set amongst held coins with less than maxNumber of Spends"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Fees (in CLP/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Fees (in CLP/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("calypso-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"In rare cases, a spend with 7 coins exceeds our maximum allowable "
"transaction size, please retry spend using 6 or less coins"),
QT_TRANSLATE_NOOP("calypso-core", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Insufficient or insufficient confirmed funds, you might need to wait a few "
"minutes and try again."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Keep the specified amount available for spending at all times (default: 0)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Obfuscation uses exact denominated amounts to send funds, you might simply "
"need to anonymize some more coins."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Preferred Denomination for automatically minted Zerocoin  "
"(1/5/10/50/100/500/1000/5000), 0 for no preference. default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Specify custom backup path to add a copy of any automatic zCLP backup. If "
"set as dir, every backup generates a timestamped file. If set as file, will "
"rewrite to that file every backup. If backuppath is set as well, 4 backups "
"will happen"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Specify custom backup path to add a copy of any wallet backup. If set as "
"dir, every backup generates a timestamped file. If set as file, will rewrite "
"to that file every backup."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"SwiftX requires inputs with at least 6 confirmations, you might need to wait "
"a few minutes and try again."),
QT_TRANSLATE_NOOP("calypso-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("calypso-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Unable to bind to %s on this computer. CALYPSO Core is probably already running."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Unable to locate enough Obfuscation denominated funds for this transaction."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Unable to locate enough Obfuscation non-denominated funds for this "
"transaction that are not equal 10000 CLP."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Unable to locate enough funds for this transaction that are not equal 10000 "
"CLP."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("calypso-core", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong CALYPSO Core will not work properly."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("calypso-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("calypso-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("calypso-core", "(42388 could be used only on mainnet)"),
QT_TRANSLATE_NOOP("calypso-core", "(default: %s)"),
QT_TRANSLATE_NOOP("calypso-core", "(default: 1)"),
QT_TRANSLATE_NOOP("calypso-core", "(must be 42388 for mainnet)"),
QT_TRANSLATE_NOOP("calypso-core", "<category> can be:"),
QT_TRANSLATE_NOOP("calypso-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("calypso-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("calypso-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("calypso-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("calypso-core", "Already have that input."),
QT_TRANSLATE_NOOP("calypso-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Attempt to force blockchain corruption recovery"),
QT_TRANSLATE_NOOP("calypso-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("calypso-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("calypso-core", "Block creation options:"),
QT_TRANSLATE_NOOP("calypso-core", "Calculating missing accumulators..."),
QT_TRANSLATE_NOOP("calypso-core", "Can't denominate: no compatible inputs left."),
QT_TRANSLATE_NOOP("calypso-core", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("calypso-core", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("calypso-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("calypso-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("calypso-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("calypso-core", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("calypso-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("calypso-core", "CoinSpend: Accumulator witness does not verify"),
QT_TRANSLATE_NOOP("calypso-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("calypso-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("calypso-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("calypso-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("calypso-core", "Connection options:"),
QT_TRANSLATE_NOOP("calypso-core", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("calypso-core", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("calypso-core", "Copyright (C) 2015-%i The CALYPSO Core Developers"),
QT_TRANSLATE_NOOP("calypso-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("calypso-core", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("calypso-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("calypso-core", "Delete blockchain folders and resync from scratch"),
QT_TRANSLATE_NOOP("calypso-core", "Disable OS notifications for incoming transactions (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("calypso-core", "Display the stake modifier calculations in the debug.log file."),
QT_TRANSLATE_NOOP("calypso-core", "Display verbose coin stake messages in the debug.log file."),
QT_TRANSLATE_NOOP("calypso-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("calypso-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("calypso-core", "Done loading"),
QT_TRANSLATE_NOOP("calypso-core", "Enable automatic Zerocoin minting (0-1, default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("calypso-core", "Enable publish hash transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("calypso-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("calypso-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("calypso-core", "Enable publish raw transaction (locked via SwiftX) in <address>"),
QT_TRANSLATE_NOOP("calypso-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("calypso-core", "Enable staking functionality (0-1, default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Entries are full."),
QT_TRANSLATE_NOOP("calypso-core", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("calypso-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("calypso-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("calypso-core", "Error loading block database"),
QT_TRANSLATE_NOOP("calypso-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("calypso-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("calypso-core", "Error loading wallet.dat: Wallet requires newer version of CALYPSO Core"),
QT_TRANSLATE_NOOP("calypso-core", "Error opening block database"),
QT_TRANSLATE_NOOP("calypso-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("calypso-core", "Error recovering public key."),
QT_TRANSLATE_NOOP("calypso-core", "Error writing zerocoinDB to disk"),
QT_TRANSLATE_NOOP("calypso-core", "Error"),
QT_TRANSLATE_NOOP("calypso-core", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("calypso-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("calypso-core", "Error: Can't select current denominated inputs"),
QT_TRANSLATE_NOOP("calypso-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("calypso-core", "Error: No valid utxo!"),
QT_TRANSLATE_NOOP("calypso-core", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("calypso-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("calypso-core", "Error: You already have pending entries in the Obfuscation pool"),
QT_TRANSLATE_NOOP("calypso-core", "Failed to calculate accumulator checkpoint"),
QT_TRANSLATE_NOOP("calypso-core", "Failed to create mint"),
QT_TRANSLATE_NOOP("calypso-core", "Failed to deserialize"),
QT_TRANSLATE_NOOP("calypso-core", "Failed to find Zerocoins in wallet.dat"),
QT_TRANSLATE_NOOP("calypso-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("calypso-core", "Failed to parse host:port string"),
QT_TRANSLATE_NOOP("calypso-core", "Failed to read block"),
QT_TRANSLATE_NOOP("calypso-core", "Failed to select a zerocoin"),
QT_TRANSLATE_NOOP("calypso-core", "Failed to wipe zerocoinDB"),
QT_TRANSLATE_NOOP("calypso-core", "Failed to write coin serial number into wallet"),
QT_TRANSLATE_NOOP("calypso-core", "Fee (in CLP/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("calypso-core", "Finalizing transaction."),
QT_TRANSLATE_NOOP("calypso-core", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("calypso-core", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("calypso-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("calypso-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("calypso-core", "Importing..."),
QT_TRANSLATE_NOOP("calypso-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("calypso-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("calypso-core", "Incompatible version."),
QT_TRANSLATE_NOOP("calypso-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("calypso-core", "Information"),
QT_TRANSLATE_NOOP("calypso-core", "Initialization sanity check failed. CALYPSO Core is shutting down."),
QT_TRANSLATE_NOOP("calypso-core", "Input is not valid."),
QT_TRANSLATE_NOOP("calypso-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("calypso-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("calypso-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("calypso-core", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("calypso-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("calypso-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("calypso-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("calypso-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("calypso-core", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("calypso-core", "Invalid amount"),
QT_TRANSLATE_NOOP("calypso-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("calypso-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("calypso-core", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("calypso-core", "Invalid private key."),
QT_TRANSLATE_NOOP("calypso-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("calypso-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Last Obfuscation was too recent."),
QT_TRANSLATE_NOOP("calypso-core", "Last successful Obfuscation action was too recent."),
QT_TRANSLATE_NOOP("calypso-core", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Line: %d"),
QT_TRANSLATE_NOOP("calypso-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("calypso-core", "Loading block index..."),
QT_TRANSLATE_NOOP("calypso-core", "Loading budget cache..."),
QT_TRANSLATE_NOOP("calypso-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("calypso-core", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("calypso-core", "Loading sporks..."),
QT_TRANSLATE_NOOP("calypso-core", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("calypso-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("calypso-core", "Location of the auth cookie (default: data dir)"),
QT_TRANSLATE_NOOP("calypso-core", "Lock is already in place."),
QT_TRANSLATE_NOOP("calypso-core", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Lookup(): Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("calypso-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Masternode options:"),
QT_TRANSLATE_NOOP("calypso-core", "Masternode queue is full."),
QT_TRANSLATE_NOOP("calypso-core", "Masternode:"),
QT_TRANSLATE_NOOP("calypso-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Mint did not make it into blockchain"),
QT_TRANSLATE_NOOP("calypso-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("calypso-core", "Mixing in progress..."),
QT_TRANSLATE_NOOP("calypso-core", "Need address because change is not exact"),
QT_TRANSLATE_NOOP("calypso-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("calypso-core", "No Masternodes detected."),
QT_TRANSLATE_NOOP("calypso-core", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("calypso-core", "No funds detected in need of denominating."),
QT_TRANSLATE_NOOP("calypso-core", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("calypso-core", "Node relay options:"),
QT_TRANSLATE_NOOP("calypso-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("calypso-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("calypso-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("calypso-core", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("calypso-core", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("calypso-core", "Number of custom location backups to retain (default: %d)"),
QT_TRANSLATE_NOOP("calypso-core", "Obfuscation is idle."),
QT_TRANSLATE_NOOP("calypso-core", "Obfuscation request complete:"),
QT_TRANSLATE_NOOP("calypso-core", "Obfuscation request incomplete:"),
QT_TRANSLATE_NOOP("calypso-core", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("calypso-core", "Options:"),
QT_TRANSLATE_NOOP("calypso-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("calypso-core", "Percentage of automatically minted Zerocoin  (1-100, default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Preparing for resync..."),
QT_TRANSLATE_NOOP("calypso-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Print version and exit"),
QT_TRANSLATE_NOOP("calypso-core", "RPC server options:"),
QT_TRANSLATE_NOOP("calypso-core", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("calypso-core", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("calypso-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("calypso-core", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Reindex the CLP and zCLP money supply statistics"),
QT_TRANSLATE_NOOP("calypso-core", "Reindex the accumulator database"),
QT_TRANSLATE_NOOP("calypso-core", "Reindexing zerocoin database..."),
QT_TRANSLATE_NOOP("calypso-core", "Reindexing zerocoin failed"),
QT_TRANSLATE_NOOP("calypso-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("calypso-core", "Rescanning..."),
QT_TRANSLATE_NOOP("calypso-core", "ResetMintZerocoin finished: "),
QT_TRANSLATE_NOOP("calypso-core", "ResetSpentZerocoin finished: "),
QT_TRANSLATE_NOOP("calypso-core", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("calypso-core", "Selected coins value is less than payment target"),
QT_TRANSLATE_NOOP("calypso-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Session not complete!"),
QT_TRANSLATE_NOOP("calypso-core", "Session timed out."),
QT_TRANSLATE_NOOP("calypso-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("calypso-core", "Set external address:port to get to this masternode (example: %s)"),
QT_TRANSLATE_NOOP("calypso-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("calypso-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Set the Maximum reorg depth (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("calypso-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("calypso-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("calypso-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("calypso-core", "Signing failed."),
QT_TRANSLATE_NOOP("calypso-core", "Signing timed out."),
QT_TRANSLATE_NOOP("calypso-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("calypso-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("calypso-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("calypso-core", "Specify data directory"),
QT_TRANSLATE_NOOP("calypso-core", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("calypso-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("calypso-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("calypso-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("calypso-core", "Spend Valid"),
QT_TRANSLATE_NOOP("calypso-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Staking options:"),
QT_TRANSLATE_NOOP("calypso-core", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("calypso-core", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("calypso-core", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("calypso-core", "SwiftX options:"),
QT_TRANSLATE_NOOP("calypso-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("calypso-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("calypso-core", "Synchronization pending..."),
QT_TRANSLATE_NOOP("calypso-core", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("calypso-core", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("calypso-core", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("calypso-core", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("calypso-core", "Syncing zCLP wallet..."),
QT_TRANSLATE_NOOP("calypso-core", "The coin spend has been used"),
QT_TRANSLATE_NOOP("calypso-core", "The new spend coin transaction did not verify"),
QT_TRANSLATE_NOOP("calypso-core", "The selected mint coin is an invalid coin"),
QT_TRANSLATE_NOOP("calypso-core", "The transaction did not verify"),
QT_TRANSLATE_NOOP("calypso-core", "This help message"),
QT_TRANSLATE_NOOP("calypso-core", "This is experimental software."),
QT_TRANSLATE_NOOP("calypso-core", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("calypso-core", "This is not a Masternode."),
QT_TRANSLATE_NOOP("calypso-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Too many spends needed"),
QT_TRANSLATE_NOOP("calypso-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("calypso-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("calypso-core", "Transaction Created"),
QT_TRANSLATE_NOOP("calypso-core", "Transaction Mint Started"),
QT_TRANSLATE_NOOP("calypso-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("calypso-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("calypso-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("calypso-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("calypso-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("calypso-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("calypso-core", "Transaction too large"),
QT_TRANSLATE_NOOP("calypso-core", "Transmitting final transaction."),
QT_TRANSLATE_NOOP("calypso-core", "Try to spend with a higher security level to include more coins"),
QT_TRANSLATE_NOOP("calypso-core", "Trying to spend an already spent serial #, try again."),
QT_TRANSLATE_NOOP("calypso-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("calypso-core", "Unable to find transaction containing mint"),
QT_TRANSLATE_NOOP("calypso-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("calypso-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("calypso-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("calypso-core", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("calypso-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("calypso-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("calypso-core", "Use a custom max chain reorganization depth (default: %u)"),
QT_TRANSLATE_NOOP("calypso-core", "Use the test network"),
QT_TRANSLATE_NOOP("calypso-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("calypso-core", "Value is below the smallest available denomination (= 1) of zCLP"),
QT_TRANSLATE_NOOP("calypso-core", "Value more than Obfuscation pool maximum allows."),
QT_TRANSLATE_NOOP("calypso-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("calypso-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("calypso-core", "Version 1 zCLP require a security level of 100 to successfully spend."),
QT_TRANSLATE_NOOP("calypso-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("calypso-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("calypso-core", "Wallet needed to be rewritten: restart CALYPSO Core to complete"),
QT_TRANSLATE_NOOP("calypso-core", "Wallet options:"),
QT_TRANSLATE_NOOP("calypso-core", "Wallet window title"),
QT_TRANSLATE_NOOP("calypso-core", "Warning"),
QT_TRANSLATE_NOOP("calypso-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("calypso-core", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("calypso-core", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("calypso-core", "Will retry..."),
QT_TRANSLATE_NOOP("calypso-core", "You don't have enough Zerocoins in your wallet"),
QT_TRANSLATE_NOOP("calypso-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("calypso-core", "Your entries added successfully."),
QT_TRANSLATE_NOOP("calypso-core", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("calypso-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("calypso-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("calypso-core", "Zerocoin options:"),
QT_TRANSLATE_NOOP("calypso-core", "isValid(): Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("calypso-core", "on startup"),
QT_TRANSLATE_NOOP("calypso-core", "wallet.dat corrupt, salvage failed"),
};

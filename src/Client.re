let inMemoryCache = ApolloInMemoryCache.createInMemoryCache();

let httpLink =
  ApolloLinks.createHttpLink(~uri="http://localhost:4000/graphql", ());
// I connect to this project of mine:
// https://github.com/sbmart/reimagined-disco-backend

let instance =
  ReasonApollo.createApolloClient(~link=httpLink, ~cache=inMemoryCache, ());
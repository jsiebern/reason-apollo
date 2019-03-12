open ApolloClient;

[@bs.module "react-apollo"]
external make:
  (~client: generatedApolloClient, ~children: 'children) => React.element =
  "ApolloProvider";
